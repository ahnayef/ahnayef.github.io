document.querySelector(".cgpaArea").addEventListener("submit",(e)=>{
  e.preventDefault();
  calcCG();
})



function calcCG() {

  let tSum = 0.0;
  document.querySelector("#theory").value.split(",").forEach(e => {
    e = parseFloat(e);
    tSum += e * 3;
  });

  let lSum = 0.0;
  document.querySelector("#lab").value.split(",").forEach(e => {
    e = parseFloat(e);
    lSum += e * 1.5;
  });

  let totalCredit = 0.0;
  document.querySelector("#credit").value.split(",").forEach(e => {
    e = parseFloat(e);
    totalCredit += e;
  });

  let cgpa = (tSum + lSum) / totalCredit;
  party.confetti(document.querySelector("#res"));
  document.querySelector("#res").style.opacity=1;
  document.querySelector("#res").innerHTML = "Your CGPA is:" + cgpa.toFixed(2);
  document.querySelector("#resetBtn").style.display="block";

}