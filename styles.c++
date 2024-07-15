*{
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body{
    font-family: 'Times New Roman', Times, serif;
    line-height: 1.6;
    background-color: gainsboro;
   
}

.header{
    background-color: black;
    color: #ffffff;
    padding: 10px 0;
    position: sticky;
    top: 0;
    /* z-index: 1000; */
}

.navbar{
    display: flex;
    justify-content: center;
}

.nav-link{
    color: #fff;
    text-decoration: none;
    /* tblr */
    padding: 10px 20px;

}
.nav-link:hover{
    background-color: greenyellow;
}

.section{
    padding: 60px 20px;
    text-align: center;
    color: black;
}
.home{
    background: linear-gradient(to left, #333, #333 50%, #eee 75%, #333 75%);
}
.about, .skills{
    background-color: #fff;
}
.about-content{
    display: flex;
    flex-wrap: wrap;
    justify-content: space-around;
    align-items: center;
    margin-top: 20px;

}
.about-image, .about-text{
    /* flex: 1 1 45%; */
    /* Flex item to grow and take up additional space  */
    flex-grow: 1;
    /* Flex item to shrink and give up the space */
    flex-shrink: 1;
    /* Initial size of the flex item before any growing or shrinking */
    flex-basis: 45%;
    padding: 10px;
}

.about-image img{
    max-width: 100%;
    height: auto;
    border-radius: 24px;
}

/* .projects{
    background-color: gray;
} */

.projects-grid{
    display: grid;
    grid-template-columns: repeat(auto-fit,minmax(250px, 1fr));
    gap: 20px;
    margin-top: 20px;

}

.project-item{
    background-color: #fff;
    padding:20px;
    border: 3px solid blanchedalmond;
}

.project-item img{
    max-width: 100%;
    height: auto;
    border-radius: 14px;
}

.project-item a{
    display: block;
    margin-top: 10px;
    color: rgb(121, 11, 218);
    text-decoration: none;
}

.skills ul{
    list-style: none;
    /* padding: 0; */
}
.skills li{
    display:inline-block;
    padding: 10px 20px;
    margin: 5px;
    background-color: #257525;
    color: white;
    border-radius: 8px;
}

.contact-form{
    max-width: 600px;
    margin: 0 auto;
    background-color: #fff;
    padding: 20px;
    border-radius: 14px;

}
.contact-form label{
    display: block;
    margin: 10px 5px;
}

.contact-form input, .contact-form textarea{
    width: 100%;
    padding: 10px;
    border: 2px solid black;
    border-radius: 6px;
}

.contact-form button{
    display: block;
    width: 30%;
    margin: auto;
    padding: 7px;
    border-radius: 10px;
}

.footer{
    background-color: black;
    color: white;
    text-align: center;
    position: fixed;
    width: 100%;
    bottom: 0;
}

