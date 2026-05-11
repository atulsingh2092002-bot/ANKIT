<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Test Website</title>

  <style>
    body{
      margin:0;
      padding:0;
      background:#0f172a;
      color:white;
      font-family:Arial, sans-serif;
      display:flex;
      justify-content:center;
      align-items:center;
      height:100vh;
      text-align:center;
    }

    .box{
      background:#1e293b;
      padding:40px;
      border-radius:15px;
      box-shadow:0 0 20px rgba(0,0,0,0.4);
    }

    h1{
      color:#38bdf8;
      margin-bottom:10px;
    }

    p{
      color:#cbd5e1;
    }

    button{
      margin-top:20px;
      padding:10px 20px;
      border:none;
      border-radius:8px;
      background:#38bdf8;
      color:black;
      font-weight:bold;
      cursor:pointer;
    }

    button:hover{
      background:#0ea5e9;
    }
  </style>
</head>

<body>

  <div class="box">
    <h1>GitHub Test Website</h1>

    <p>
      Agar ye page online dikh raha hai,
      to deployment successful hai 🚀
    </p>

    <button onclick="showMsg()">
      Click Me
    </button>
  </div>

  <script>
    function showMsg(){
      alert("Website Working Successfully!");
    }
  </script>

</body>
</html>
