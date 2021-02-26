<!-- Footer -->
<footer class="page-footer font-small indigo pt-4">

    <!-- Footer Links -->
    <div class="container-fluid text-center text-md-left">

        <!-- Grid row -->
        <div class="row">

            <!-- Grid column -->
            <div class="col-md-6 mt-md-0 mt-3">

                <!-- Content -->
                <h5 class="text-uppercase">$Extras.Translations[$Extras.language].about</h5>

                <table>
                    <tr>
                        <td>$Extras.Translations[$Extras.language].hardware:</td>
                        <td>$station.hardware</td>
                    </tr>
                    <tr>
                        <td>$Extras.Translations[$Extras.language].altitude:</td>
                        <td>$station.altitude</td>
                    </tr>
                </table>

                #if $Extras.has_key('about')
                <p>$Extras.about</p>
                #end if

            </div>
            <!-- Grid column -->

            <hr class="clearfix w-100 d-md-none pb-3">

            <!-- Grid column -->
            <div class="col-md-3 mb-md-0 mb-3">

                #if $Extras.has_key('footer_box_title') and $Extras.footer_box_title is not ""
                <h5 class="text-uppercase">$Extras.footer_box_title</h5>
                #end if

                #if $Extras.has_key('footer_box_content') and $Extras.footer_box_content is not ""
                $Extras.footer_box_content
                #end if
            </div>
            <!-- Grid column -->

            <!-- Grid column -->
            <div class="col-md-3 mb-md-0 mb-3">

                <!-- Links -->
                <h5 class="text-uppercase">$Extras.Translations[$Extras.language].links</h5>

                <ul class="list-unstyled">
                    #if $Extras.has_key('link1_text') and $Extras.link1_url is not ""
                    <li>
                        <a href="$Extras.link1_url" target="_blank" rel="noopener">$Extras.link1_text</a>
                    </li>
                    #end if
                    #if $Extras.has_key('link2_text') and $Extras.link2_url is not ""
                    <li>
                        <a href="$Extras.link2_url" target="_blank" rel="noopener">$Extras.link2_text</a>
                    </li>
                    #end if
                    #if $Extras.has_key('link3_text') and $Extras.link3_url is not ""
                    <li>
                        <a href="$Extras.link3_url" target="_blank" rel="noopener">$Extras.link3_text</a>
                    </li>
                    #end if
                    #if $Extras.has_key('link4_text') and $Extras.link4_url is not ""
                    <li>
                        <a href="$Extras.link4_url" target="_blank" rel="noopener">$Extras.link4_text</a>
                    </li>
                    #end if
                </ul>

            </div>
            <!-- Grid column -->

        </div>
        <!-- Grid row -->

    </div>
    <!-- Footer Links -->

    <!-- Copyright -->
    <div class="footer-copyright text-center py-3">
        &copy; $current.dateTime.format("%Y")
        #if $Extras.has_key('you')
        $Extras.you
        #end if
        <span class="mx-2">&bull;</span>
        Powered by <a href="https://weewx.com" target="_blank">weewx</a> v$station.version
        <span class="mx-2">&bull;</span>
        <a href="https://projects.neoground.com/neowx-material" target="_blank">NeoWX Material</a> skin
    </div>
    <!-- Copyright -->

</footer>
<!-- Footer -->