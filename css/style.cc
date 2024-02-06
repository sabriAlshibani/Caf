.navbar {
  position: relative;
  width: 100%;
}
.navbar .container {
  display: flex;
  justify-content: space-between;
  align-items: center;
  min-height: 98px;
}
.navbar__logo {
  font-size: 30px;
  text-decoration: none;
  display: inline-block;
  color: var(--main-color);
  font-weight: bold;
}
@media (max-width: 767px) {
  .navbar__logo {
    font-size: 16px;
  }
}
.navbar__logo span {
  color: white;
}
.navbar__navagations {
  display: flex;
}
@media (max-width: 767px) {
  .navbar__navagations {
    display: none;
  }
}
.navbar__navagations li {
  margin: 30px 20px;
}
.navbar__navagations a {
  padding: 10px 0;
  color: white;
  font-weight: 400;
  transition: 0.5s;
  position: relative;
}
.navbar__navagations a:after {
  content: "";
  position: absolute;
  width: 0;
  height: 2px;
  background-color: var(--main-color);
  left: 0;
  bottom: 0;
  transition: 0.5s;
}
.navbar__navagations a .focus, .navbar__navagations a:hover, .navbar__navagations a:hover:after {
  width: 100%;
  color: var(--main-color);
}
.navbar__log-btn {
  color: white;
  font-weight: 400;
  margin-right: 20px;
}

.banner {
  position: relative;
  margin-top: 140px;
  z-index: 1;
}
@media (max-width: 767px) {
  .banner {
    text-align: center;
  }
}
.banner__title {
  font-size: 70px;
  color: white;
  text-transform: capitalize;
}
.banner__title span {
  color: var(--main-color);
}
.banner__description {
  color: var(--dsc-color);
  margin: 20px 0;
}
.banner .btn {
  margin: 40px 0 30px;
}
@media (max-width: 767px) {
  .banner .btn {
    padding: 10px 20px;
  }
}

header {
  width: 100%;
  height: 100vh;
  background-image: url(../images/tea.jpg);
  background-size: cover;
}
header:before {
  content: "";
  position: absolute;
  width: 100%;
  height: 100%;
  left: 0;
  top: 0;
  background-color: rgba(0, 0, 0, 0.1);
}

.section-heading {
  text-align: center;
}
.section-heading .title {
  position: relative;
  color: #fff;
  font-size: 30px;
  font-weight: normal;
  margin-bottom: 40px;
  /*     &::after {
        font-family: 'Font Awesome 5 Free';
        content: 'mug-hot';
        font-weight: 900;
        position: absolute;
        bottom: -20px;
        left: 50%;
        transform: translateX(-50%);
        color: var(--main-color);
      } */
}
.section-heading .title span {
  background: none;
  color: var(--main-color);
  font-size: 40px;
  font-weight: 600;
}
.section-heading .title:before {
  content: "";
  position: absolute;
  width: 240px;
  height: 2px;
  background-color: #ccc;
  left: 50%;
  transform: translateX(-50%);
  bottom: -20px;
}
.section-heading .title:after {
  content: "";
  position: absolute;
  width: 50px;
  height: 3px;
  background-color: #ccc;
  left: 50%;
  transform: translateX(-50%);
  bottom: -18px;
}
.section-heading .description {
  color: var(--dsc-color);
  width: 400px;
  margin: 0 auto 100px;
  line-height: 2;
}

.portfolio {
  padding-top: 60px;
  padding-bottom: 60px;
  background-color: var(--bgr-color);
}
.portfolio__cards {
  display: flex;
  flex-wrap: wrap;
  justify-content: space-between;
}
.portfolio__cards-box {
  padding: 20px;
  text-align: center;
}
@media (min-width: 768px) {
  .portfolio__cards-box {
    flex-basis: 45%;
  }
}
@media (min-width: 992px) {
  .portfolio__cards-box {
    flex-basis: 30%;
  }
}
.portfolio__cards-box img {
  width: 100%;
  transition: 0.3s;
  border-radius: 0;
}
.portfolio__cards-box img:hover {
  transform: scale(1.1);
  border-radius: 50px;
  border-color: var(--main-color);
}
.portfolio__cards-description {
  color: var(--dsc-color);
  margin: 10px 0;
}
.portfolio__cards-share {
  color: var(--main-color);
}
.portfolio .section-heading .description {
  width: 300px;
}

.services {
  padding-top: 60px;
  padding-bottom: 60px;
  background-color: var(--bgr-color);
}
.services__boxes {
  display: flex;
  color: red;
}
.services__boxes-serve {
  flex-basis: 20%;
  height: 80px;
}
.services__boxes-serve img {
  width: 200px;
  height: 200px;
  border-radius: 50%;
}

* {
  margin: 0;
  padding: 0;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

body {
  font-family: "Josefin Sans", sans-serif;
  font-family: "Open Sans", sans-serif;
}

.container {
  padding-left: 15px;
  padding-right: 15px;
  margin-left: auto;
  margin-right: auto;
}

@media (min-width: 768px) {
  .container {
    width: 750px;
  }
}
@media (min-width: 992px) {
  .container {
    width: 970px;
  }
}
@media (min-width: 1200px) {
  .container {
    width: 1170px;
  }
}
ul {
  list-style: none;
}

a {
  text-decoration: none;
  display: inline-block;
}

.btn {
  background-color: var(--main-color);
  padding: 10px 40px;
  border-radius: 30px;
  border-top-right-radius: 0;
  color: white;
  font-weight: 500;
  transition: 0.5s;
}
.btn:hover {
  border-top-right-radius: 30px;
}
@media (max-width: 767px) {
  .btn {
    padding: 5px 10px;
    font-size: 10px;
  }
}

:root {
  --main-color: rgb(204, 154, 15);
  --bgr-color: #0B0B0F;
  --dsc-color: #777;
}

/*# sourceMappingURL=style.cc.map */
