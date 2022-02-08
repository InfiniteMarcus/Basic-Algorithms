function formatCEP () {
    const number = document.getElementById("cep").value;
    const cep = number.replace(/\D/g,'');

    if(cep.length < 8) return;

    const formatedCEP = `${cep[0]}${cep[1]}${cep[2]}${cep[3]}${cep[4]}-${cep[5]}${cep[6]}${cep[7]}`;
    document.getElementById("cep").value = formatedCEP;

	fetch(`https://brasilapi.com.br/api/cep/v1/${formatedCEP}`).then(async res => {

		if (!res.ok) {
			throw new Error("Falha na resposta");
		}

		document.getElementById("cep-feedback").style.display = "none";

		const json = await res.json();

		document.getElementById("street").value = json.street;
		document.getElementById("city").value = json.city;
		document.getElementById("district").value = json.neighborhood;
		document.getElementById("estado").value = json.state;

	}).catch((err) => {
		console.log(err);
		document.getElementById("cep-feedback").style.display = "block";
	});
}