<!DOCTYPE html>








<html class="no-js" lang="en">

<head>
    

    <title>
    Lidar_UART_Airbagdeployment - This code is referred from Akash Gaikawad imple...
 | Mbed</title>
    

    <meta charset="utf-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=9; IE=8; IE=7; IE=EDGE" />
    <!-- Set the viewport width to device width for mobile -->
    <meta name="viewport" content="user-scalable=yes,width=device-width,initial-scale=0.9" />

    

<!-- Page-hiding snippet -->
<style>.async-hide { opacity: 0 !important} </style>
<script>(function(a,s,y,n,c,h,i,d,e){s.className+=' '+y;h.start=1*new Date;
h.end=i=function(){s.className=s.className.replace(RegExp(' ?'+y),'')};
(a[n]=a[n]||[]).hide=h;setTimeout(function(){i();h.end=null},c);h.timeout=c;
})(window,document.documentElement,'async-hide','dataLayer',4000,
{'GTM-WXMLD4S':true});</script>

<!-- Google Analytics -->
<script>
(function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
})(window,document,'script','https://www.google-analytics.com/analytics.js','ga');

ga('create', 'UA-1447836-8');
ga('require', 'GTM-WXMLD4S')
</script>

<!-- Google Tag Manager -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl+ '&amp;gtm_auth=SMYNPwM0ICsV00c1ZHETqQ&amp;gtm_preview=env-2&gtm_cookies_win=x';f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-M6FZ495');</script>


    <script>
    (function(h,o,t,j,a,r){
        h.hj=h.hj||function(){(h.hj.q=h.hj.q||[]).push(arguments)};
        h._hjSettings={hjid:971746,hjsv:6};
        a=o.getElementsByTagName('head')[0];
        r=o.createElement('script');r.async=1;
        r.src=t+h._hjSettings.hjid+j+h._hjSettings.hjsv;
        a.appendChild(r);
    })(window,document,'https://static.hotjar.com/c/hotjar-','.js?sv=');
</script>



<!-- Favicons -->
<link rel="apple-touch-icon" sizes="57x57" href="/static/img/favicons/apple-icon-57x57.png">
<link rel="apple-touch-icon" sizes="60x60" href="/static/img/favicons/apple-icon-60x60.png">
<link rel="apple-touch-icon" sizes="72x72" href="/static/img/favicons/apple-icon-72x72.png">
<link rel="apple-touch-icon" sizes="76x76" href="/static/img/favicons/apple-icon-76x76.png">
<link rel="apple-touch-icon" sizes="114x114" href="/static/img/favicons/apple-icon-114x114.png">
<link rel="apple-touch-icon" sizes="120x120" href="/static/img/favicons/apple-icon-120x120.png">
<link rel="apple-touch-icon" sizes="144x144" href="/static/img/favicons/apple-icon-144x144.png">
<link rel="apple-touch-icon" sizes="152x152" href="/static/img/favicons/apple-icon-152x152.png">
<link rel="apple-touch-icon" sizes="180x180" href="/static/img/favicons/apple-icon-180x180.png">
<link rel="icon" type="image/png" sizes="192x192"  href="/static/img/favicons/android-icon-192x192.png">
<link rel="icon" type="image/png" sizes="32x32" href="/static/img/favicons/favicon-32x32.png">
<link rel="icon" type="image/png" sizes="96x96" href="/static/img/favicons/favicon-96x96.png">
<link rel="icon" type="image/png" sizes="16x16" href="/static/img/favicons/favicon-16x16.png">
<link rel="manifest" href="/static/img/favicons/manifest.json">
<link rel="shortcut icon" href="/static/img/favicon.ico?">
<meta name="msapplication-TileColor" content="#ffffff">
<meta name="msapplication-TileImage" content="/static/img/favicons/ms-icon-144x144.png">
<meta name="theme-color" content="#ffffff">

<link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Lato:300,400,700">
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css">


<link rel="stylesheet" href="/static/css/global-nav-1.css">
<link rel="stylesheet" href="/static/css/global-footer.css">
<link rel="stylesheet" href="/static/css/cookie_law.css">



    
    

    <link rel="stylesheet" type="text/css" href="/static/legacy-main.409b14b7763c.css">

    
    <script type="text/javascript" src="/static/js/foundation/modernizr.foundation.692789fedf79.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.e1be4332ee30.js"></script>
    <script type="text/javascript" src="/static/js/date.b256e88f04fa.js"></script>
    <script type="text/javascript" src="/static/js/mbedcom.9c3347e342b4.js"></script>
    <script type="text/javascript" src="/static/js/configure-csrf.53ac9f0cb7c9.js"></script>
    <script type="text/javascript" src="/static/js/import-button-1.300a07297268.js"></script>
    <script type="text/javascript" src="/static/js/jquery.timeago.ec4766706e7f.js"></script>
    <script type="text/javascript" src="/static/js/jquery.cycle.all.latest.3150066d9b80.js"></script>
    <script type="text/javascript" src="/static/js/json2.70373c5d1da2.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.event.move.28069deb0284.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.event.swipe.d3a967c9af7f.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.foundation.alerts.5c8929dfe66f.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.foundation.buttons.7b4debddf16f.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.foundation.forms.67a3f0d91d5f.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.foundation.navigation.a1d5e788e9bf.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.foundation.tabs.ea24b7610a59.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.foundation.reveal.8c807285269b.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.foundation.topbar.c856c741d166.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.foundation.accordion.43d9b4227ce6.js"></script>
    <script type="text/javascript" src="/static/js/foundation/jquery.placeholder.6e5b889042b3.js"></script>
    <script type="text/javascript" src="/static/js/foundation/responsive-tables.6b8e95c61868.js"></script>
    <script type="text/javascript" src="/static/js/jquery.smooth-scroll.min.14c52352ed6c.js"></script>
    <script type="text/javascript" src="/static/js/foundation/app.661edf61510e.js"></script>
    <script type="text/javascript" src="/static/js/clipboard.min.bd70fd596a23.js"></script>
    
    <script type="text/javascript">
        var MTIProjectId='531df303-da6d-4e1e-934d-ec3ecdc164a9';
        (function() {
            var mtiTracking = document.createElement('script');
            mtiTracking.type='text/javascript';
            mtiTracking.async='true';
            mtiTracking.src="/static/js/mtiFontTrackingCode.js";
            (document.getElementsByTagName('head')[0]||document.getElementsByTagName('body')[0]).appendChild( mtiTracking );
        })();
    </script>

    
    
    <!--[if IE]><script type="text/javascript" src="/static/js/excanvas.js"></script><![endif]-->
    <meta name="description" content="This code is referred from Akash Gaikawad implementation for similar purpose." />
    <link rel="stylesheet" type="text/css" href="/static/css/hgstyle.css" />

    
</head>

<body>
    <!-- Google Tag Manager (noscript) -->
    <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-M6FZ495&gtm_auth=3a8Vwkp5SsDiYq6tYR1ObQ&gtm_preview=env-6&gtm_cookies_win=x"
    height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
    <!-- End Google Tag Manager (noscript) -->

    




<header id="g-nav-wrapper">
    <div id="g-spaceholder"></div>
    <div id="g-top-bar">
        <div class="g-nav-flex-left">
            <button class="g-icon-button" id="g-burger" data-nav-toggle="#g-main-nav">
                <i class="fa fa-bars"></i>
            </button>
            <a id="g-arm-logo" href="https://www.mbed.com">
                <img src="/static/img/ArmMbedLogoVertical.svg" viewBox="0 0 50 50"/>
            </a>
            <nav id="g-main-nav" class="g-nav">
                <ul class="first-level">
                    <li class="g-nav-item g-nav-close-item">
                        <span class="g-nav-close" data-nav-close="#g-main-nav"><i class="fa fa-times"></i></span>
                    </li>
                    <li class="g-nav-item g-nav-has-dropdown">
                        <span class="g-nav-link">Overview</span>
                        <ul class="second-level">
                            <li class="g-nav-item">
                                <a class="g-nav-link" href="https://os.mbed.com">Mbed OS</a>
                                <ul class="third-level">
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://www.mbed.com/en/platform/mbed-os">Mbed OS Features</a></li>
                                </ul>
                            </li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/linux-os">Mbed Linux OS</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/studio">Mbed Studio</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://tls.mbed.org">Mbed TLS</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://www.pelion.com">Pelion</a></li>
                            <li class="g-nav-item">
                                <a class="g-nav-link" href="https://www.mbed.com/en/technologies">Technologies</a>
                                <ul class="third-level">
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://www.mbed.com/en/technologies/connectivity">Connectivity</a></li>
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://www.mbed.com/en/technologies/security">Security</a></li>
                                </ul>
                            </li>
                            <li class="g-nav-item">
                                <a class="g-nav-link" href="https://www.mbed.com/en/partners/our-partners">Our Partners</a>
                                <ul class="third-level">
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://partners.mbed.com">Partner Portal</a></li>
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://www.mbed.com/en/partners/become-partner/">Become a Partner</a></li>
                                </ul>
                            </li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/blog">Mbed Blog</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://blog.mbed.com">Pelion IoT Blog</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://www.mbed.com/en/about-mbed/events">Events</a></li>
                        </ul>
                    </li>
                    <li class="g-nav-item g-nav-has-dropdown">
                        <span class="g-nav-link">Hardware</span>
                        <ul class="second-level">
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/hardware">Hardware Overview</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/platforms">Boards</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/modules">Modules</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/components">Components</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://www.mbed.com/en/about-mbed/mbed-enabled/">About Mbed Enabled</a></li>
                        </ul>
                    </li>
                    <li class="g-nav-item g-nav-has-dropdown">
                        <span class="g-nav-link">Docs</span>
                        <ul class="second-level">
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/docs/mbed-os/">Mbed OS</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/docs/linux-os/">Mbed Linux OS</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/docs/mbed-cordio/">Mbed Cordio</a></li>
                            <li class="g-nav-item">
                                <a class="g-nav-link" href="https://www.pelion.com/docs">Pelion</a>
                                <ul class="third-level">
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/guides/connect-device-to-pelion">Connect Guide</a></li>
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/guides/pelion-firmware-update">Update Guide</a></li>
                                </ul>
                            </li>
                        </ul>
                    </li>
                    <li class="g-nav-item g-nav-has-dropdown">
                        <span class="g-nav-link">Code</span>
                        <ul class="second-level">
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/code">Libraries and Examples</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/releases">Mbed OS Releases</a></li>
                        </ul>
                    </li>
                    <li class="g-nav-item g-nav-has-dropdown">
                        <span class="g-nav-link">Support</span>
                        <ul class="second-level">
                            <li class="g-nav-item">
                                <a class="g-nav-link" href="https://os.mbed.com/support">Mbed Support</a>
                                <ul class="third-level">
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/commercial-support-pricing">Commercial Support and Pricing</a></li>
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/questions">Questions</a></li>
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/forum">Forum</a></li>
                                </ul>
                            </li>
                            <li class="g-nav-item">
                                <a class="g-nav-link" href="https://www.arm.com/support/contact-support/pelion-iot-support">Pelion Support</a>
                                <ul class="third-level">
                                    <li class="g-nav-item"><a class="g-nav-link" href="https://forums.mbed.com/c/mbed-cloud">Forum</a></li>
                                </ul>
                            </li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://www.mbed.com/contact">Contact Sales</a></li>
                        </ul>
                    </li>
                    <li class="g-nav-item g-nav-has-dropdown">
                        <span class="g-nav-link">Built with Mbed</span>
                        <ul class="second-level">
                            <li class="g-nav-item"><a class="g-nav-link" href="https://www.mbed.com/built-with-mbed">Gallery</a></li>
                            <li class="g-nav-item"><a class="g-nav-link" href="https://os.mbed.com/register_design">Register Your Design</a></li>
                        </ul>
                    </li>
                </ul>
            </nav>
        </div>

        <div class="g-nav-flex-right">
            <form id="g-search-input" class="global-nav-bar-search" action="https://os.mbed.com/search" method="GET">
                <input type="search" name="q" placeholder="Search...">
                <button type="submit"><i class="fa fa-search"></i></button>
            </form>
            <button id="g-search" type="submit"><i class="fa fa-search"></i></button>
            <a id="g-portal" class="g-button" href="https://portal.mbedcloud.com" target="_blank">Portal</a>
            <a id="g-compiler" class="g-button" href="https://ide.mbed.com/compiler" target="_blank">Compiler</a>
            
                <button id="g-user" class="g-icon-button" data-nav-toggle="#g-user-nav">
                    <img src="/static/img/user_profile.svg" viewBox="0 0 50 30" alt="User menu"/>
                </button>
                <nav id="g-user-nav" class="g-nav right-drawer">
                    <ul class="first-level">
                        <li class="g-nav-item g-nav-close-item">
                            <span class="g-nav-close" data-nav-close="#g-user-nav"><i class="fa fa-times"></i></span>
                        </li>
                        <li class="g-nav-item g-nav-has-dropdown">
                            <span id="g-nav-user-profile" class="g-nav-link">
                                <img src="/static/img/user_profile.svg" viewBox="0 0 50 30" alt="User menu"/>
                            </span>
                            
                                <ul class="second-level">
                                    <li><a href="/account/login/?next=/users/Sanketrj/code/Lidar_UART_Airbagdeployment/file/43e6d9eece03/main.cpp/" class="g-nav-link">Log in/sign up</a></li>
                                </ul>
                            
                        </li>
                    </ul>
                </nav>
            
        </div>
        <script src="/static/js/global-nav-nav-control.js"></script>
        <script src="/static/js/global-nav-search-control.js"></script>
    </div>
</header>



    <div id="main-content">

        <div class="row">
            <div class="row">
                <div class="column twelve">
                    

                </div>
            </div>
            <div class="row">
                <div class="column twelve">
                    

                </div>
            </div>

            

        </div>

        
        <div>
            <div class="row" id="top">
                <div class="six columns">
                    <div class="breadcrumbs">
                        
    
    <a href="/activity/">Users</a> &raquo; <a href="/users/Sanketrj/">Sanketrj</a>
    
    
 
        &raquo; <a href="/users/Sanketrj/code/">Code</a>

        
        &raquo; <a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/">Lidar_UART_Airbagdeployment</a>


                    </div>
                </div>
                <div class="six columns header search-block">
                    
                    
                </div>
            </div>
            
        </div>
        

        
<div class="row">
    <div class="nine columns main-content" id="mbed-content">
        







<div class="content-actions"></div>




<div class="code-header">
    
        <a href="/users/Sanketrj/">
            
                <img src="/media/cache/profiles/Sanket_Joshi_Photograph.jpg.50x50_q85.jpg" width="38" height="50" >

            Sanket Joshi
        </a>
    
    / <a class="repo-link" href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/">
    
        <span class="repo-meta-os-version">OS 2</span>
    
    
        <i title="This repository is a program" class="fa icon_program" aria-hidden="true"></i>
    

    Lidar_UART_Airbagdeployment
</a>

    
</div>


    <br/>
    <p>This code is referred from Akash Gaikawad implementation for similar purpose.</p>



    <p>
    <b>
        
            <a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/dependencies">
                <i class="fa fa-sitemap fa-flip-vertical" aria-hidden="true"></i> Dependencies:
            </a> &nbsp;
        
    </b>
    
        <a href="/users/mbed_official/code/mbed/">
            <i class="fa icon_library" aria-hidden="true"></i>
            mbed
        </a>
    
        <a href="/users/sventura3/code/LidarLitev2/">
            <i class="fa icon_library" aria-hidden="true"></i>
            LidarLitev2
        </a>
    
    </p>







   

<div class="page-header">
        <ul id="tabmenu">


            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/" >
              Home</a></li>


            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/shortlog"  >
              History</a></li>


            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/graph"  >
             Graph</a></li>


            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/docs/"  >
              API Documentation</a></li>


            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/wiki/"  >
              Wiki</a></li>



    
                <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/pull-requests/"  >
                  Pull Requests</a></li>
    





        </ul>
    </div>









<div id="container">
      
        <ul class="object-tools" >
            <li class="current"><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/file/43e6d9eece03/main.cpp">file</a></li>
            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/log/43e6d9eece03/main.cpp">revisions</a></li>
            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/annotate/43e6d9eece03/main.cpp">annotate</a></li>
            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/diff/43e6d9eece03/main.cpp">diff</a></li>
            <li><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/raw-file/43e6d9eece03/main.cpp">raw</a></li>
        </ul>

   <div class="module">

    <h2>main.cpp</h2>

    <dl class="overview ">
        <dt>Committer:</dt>
        <dd>Sanketrj</dd>
        <dt>Date:</dt>
        <dd><abbr class="timeago" title="Thu Mar 28 03:08:03 2019 +0000">3 months ago</abbr></dd>
        
        <dt>Revision:</dt>
        <dd><b><a class="list" href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/rev/#node|short#">1:43e6d9eece03</a></b></dd>
        
<dt>Parent: </dt>
<dd><a href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/file/ee825cd264b6/main.cpp"> 0:ee825cd264b6</a></dd>
        
    </dl>

    <div class="source">
     <h3>File content as of revision 1:43e6d9eece03:</h3>
        <pre class="mbed-code">
#include &quot;LidarLitev2.h&quot;


LidarLitev2 Lidar(PTE25, PTE24);
Serial pc(USBTX,USBRX);
Serial device(PTC17, NC);

Timer dt;

int main()
{   
    
    pc.baud(115200);
    device.baud(115200);
    Lidar.configure();
    dt.start();

    while(1){
         pc.printf( &quot;distance (control motor speed)=%d cm\t&quot;,Lidar.distance());
       //device.printf( &quot;%d&quot; ,Lidar.distance());
         //int temp=Lidar.distance();
         wait_ms(100);
          //pc.printf(&quot;%d\n&quot;,temp);
         
         dt.reset();
         if(Lidar.distance()&gt;20 and Lidar.distance()&lt;=90)
         {
         device.printf(&quot;1&quot;); 
         pc.printf(&quot;case: 1\r\n&quot;);   
        }
        
        else if (Lidar.distance()&gt;90 and Lidar.distance()&lt;=700)
         {
         device.printf(&quot;2&quot;); 
         pc.printf(&quot;case: 2\r\n&quot;);   
        }
        
         else
         {
             device.printf(&quot;0&quot;);
               pc.printf(&quot;case: 0 and Airbag Deployed\r\n&quot;);  
             }
         
}
}
            </pre>
    </div>

    </div>
</div>
            



    </div>

    <div class="three columns sidebar ">
        








<div class="panel">
    <h5 class="subheader">Repository toolbox</h5>
    <table id="repo_actions">
        <tr>
            <td>
                <div id="import-button" class="import-button"></div>

<script type="text/javascript">
  new ImportButton($("#import-button"), {
    last_used_action: {
        type: "compiler"
    },
    compiler_import_url: "https://os.mbed.com/compiler/#import:/users/Sanketrj/code/Lidar_UART_Airbagdeployment/",
    clone_url: "http://os.mbed.com/users/Sanketrj/code/Lidar_UART_Airbagdeployment/",
    is_library: false,
    cli_enabled: true
  });
</script>

            </td>
        </tr>
        <tr>
        	<td>
    	    	<a style="width: 100%;"
                   class="button secondary small expand"
                   href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/export">
    	    		<span>
    	    			<i class="fa fa-cloud-download" aria-hidden="true"></i>
    	    			Export to desktop IDE
    	    		</span>
    	    	</a>
        	</td>
        </tr>

        
        <tr>
        	<td>
        		<a style="width: 100%;" class="button secondary small expand" href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/compile">
        			<span><i class="fa icon_go" aria-hidden="true"></i>
        				Build repository
        			</span>
        		</a>
        	</td>
        </tr>
        

        

        

        

        

    </table>
</div>


<div class="panel">
    <h5 class="subheader">Repository details</h5>

    <table>
        
        <tr>
            <th>Type:</th>
            <td>
                <i class="fa fa icon_program" aria-hidden="true"></i>
                Program
            </td>
        </tr>
        
        <tr>
            <th>Version:</th>
            <td>
                Mbed OS 2
            </td>
        </tr>
        
        
        <tr>
            <th>Created:</th>
            <td><abbr class="timeago" title="2019-03-28T03:09:44+00:00">28 Mar 2019</abbr></td>
        </tr>
        <tr>
            <th>Imports:</th>
            <td>
                <a title="Number of times this repository has been imported"  href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/">
                    <i class="fa icon_imports" aria-hidden="true"></i>
                    1
                </a>
            </td>
        </tr>
        <tr>
            <th>Forks:</th>
            <td>
                <a title="Copies of this repository"
                   href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/forks">
                    <i class="fa icon_repo_fork" aria-hidden="true"></i>
                    0
                </a>
            </td>
        </tr>
        <tr>
            <th width="40%">Commits:</th>
            <td>
                <a href="shortlog">
                    <i class="fa icon_commits" aria-hidden="true"></i>
                    2
                </a>
            </td>
        </tr>
        <tr>
            <th>Dependents:</th>
            <td>
                <a title="Programs or libraries which need this repository" href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/dependents">
                    <i class="fa icon_repo_depens" aria-hidden="true"></i>
                    0
                </a>
            </td>
        </tr>
        <tr>
            <th>Dependencies:</th>
            <td>
                <a title="Libraries which this program or library needs to function" href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/dependencies">
                    <i class="fa icon_repo_deps fa-flip-vertical" aria-hidden="true"></i>
                    2
                </a>
            </td>
        </tr>
        <tr>
            <th>Followers:</th>
            <td>
                <a title="Followers of this repository" href="/users/Sanketrj/code/Lidar_UART_Airbagdeployment/followers">
                    <i class="fa icon_add" aria-hidden="true"></i>
                    1
                </a>
            </td>
        </tr>
        
    </table>

    

</div>




    





<div class="panel">
    
    <p class="text-center">
        The code in this repository is <a href="http://mbed.org/handbook/Apache-Licence">Apache</a> licensed.
    </p>
    
</div>







    </div>
</div>

    </div>



    

<footer class="global-footer">
    <ul class="global-footer-media global-footer-row">
        <li>
            <a class="footer-media-icon" title="Linkedin" href="https://www.linkedin.com/groups/mbed-2667234">
                <span class="fa fa-linkedin-square fa-2x"></span>
                <span class="global-footer-show-on-large-screens">Linkedin</span>
            </a>
        </li>
        <li>
            <a class="footer-media-icon" title="Twitter" href="http://twitter.com/armmbed">
                <span class="fa fa-twitter-square fa-2x"></span>
                <span class="global-footer-show-on-large-screens">Twitter</span>
            </a>
        </li>
        <li>
            <a class="footer-media-icon" title="Facebook" href="http://facebook.com/armmbed">
                <span class="fa fa-facebook-square fa-2x"></span>
                <span class="global-footer-show-on-large-screens">Facebook</span>
            </a>
        </li>
        <li>
            <a class="footer-media-icon" title="YouTube" href="https://www.youtube.com/channel/UCNcxd73dSceKtU77XWMOg8A">
                <span class="fa fa-youtube-square fa-2x"></span>
                <span class="global-footer-show-on-large-screens">YouTube</span>
            </a>
        </li>
        <li>
            <a class="footer-media-icon" title="Events" href="https://www.mbed.com/about-mbed/events/">
                <span class="fa fa-calendar fa-2x"></span>
                <span class="global-footer-show-on-large-screens">Events</span>
            </a>
        </li>
        <li>
            <a class="footer-media-icon" title="Forum" href="http://forums.mbed.com/">
                <span class="fa fa-comments fa-2x"></span>
                <span class="global-footer-show-on-large-screens">Forum</span>
            </a>
        </li>
        <li>
            <a class="footer-media-icon" title="Blog" href="http://blog.mbed.com/">
                <span class="fa fa-pencil-square fa-2x"></span>
                <span class="global-footer-show-on-large-screens">Blog</span>
            </a>
        </li>
    </ul>

    <div class="global-footer-copyright global-footer-row">
        <div class="copyright-statement">Copyright © <script>document.write(new Date().getFullYear());</script> Arm Limited (or its affiliates).</div>
        <ul class="copyright-links">
            <li><a href="https://www.mbed.com/">Home</a></li>
            <li><a href="https://www.mbed.com/about-mbed/terms-use/">Website Terms</a></li>
            <li><a href="https://cloud.mbed.com/terms">Pelion Device Management Terms</a></li>
            <li><a href="https://www.mbed.com/about-mbed/privacy/">Privacy</a></li>
            <li><a href="https://www.mbed.com/about-mbed/cookie-policy/">Cookies</a></li>
            <li><a href="http://www.arm.com/company/policies/trademarks">Trademarks</a></li>
        </ul>
    </div>
</footer>


    <div id="cookiemodule">
    <h5>Important Information for this Arm website</h5>
    <div id="cookiecontent">
        <p>
            This site uses cookies to store information on your computer.
            By continuing to use our site, you consent to our cookies.
            If you are not happy with the use of these cookies, please review our
            <a href="https://www.arm.com/company/policies/cookies">Cookie Policy</a>
            to learn how they can be disabled.
            By disabling cookies, some features of the site will not work.
        </p>
        <button id="acceptcookie">Accept and hide this message</button>
    </div>
</div>
<script src="/static/js/cookie_law.js"></script>



<div id="flag-content" class="reveal-modal small">
    <h2>Report Content</h2>
    <a class="close-reveal-modal">&#215;</a>
    <form action="" method="post" id="flag-content-form">
        <input type='hidden' name='csrfmiddlewaretoken' value='jwtM085RlCCrc5YC1mmPNyt9TRBsRrrDFR9LfPUn4PhNFJmt5ZJRG7FfOpXHAWuT' />
        <ul>
            <li>
                <label for="id_reason_1">
                    <input id="id_reason_1" name="reason" type="radio" value="1" />
                    Spam
                </label>
            </li>
            <li>
                <label for="id_reason_2">
                    <input id="id_reason_2" name="reason" type="radio" value="2" />
                    Inappropriate
                </label>
            </li>
        </ul>
        <a class="button secondary cancel-flag">Cancel</a>
        <input type="submit" value="Report" class="button" />
    </form>
</div>

<div id="access-warning-modal" class="reveal-modal">
    <h2>Access Warning</h2>
    <p>You do not have the correct permissions to perform this operation. Please, contact us at support@mbed.com to gain full access.</p>
    <a class="close-reveal-modal">&#215;</a>
</div>



</body>
</html>
