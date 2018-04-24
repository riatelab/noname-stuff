# Historique des versions et des changements effectués

#### 0.8.0 (2018-xx-xx)


- New: Allow to promote any layout layer (or result layer) to be a target layer. This functionality makes it possible to combine some representations more efficiently and more quickly (for example, making a chroropleth map on the result of an anamorphosis, etc.).

- Change how are imported target/layout layers: a message asking whether the newly imported layer is a target layer or a layout layer ?

- Fix position of context menu when opened on layout features located on near the right/bottom of the window.

- Try to improve the style of the box asking to type the various fields of the layer.


#### 0.7.4 (2018-04-18)

- Prevent some error when opening layer with non unique entries in field named 'id' (internally caused by the fact we use geojson and fiona is failing on opening geojson with duplicates in that field).


#### 0.7.3 (2018-03-21)

- Multiple small bug fixes related to styles.

- Fix badly set value on some input range elements.


#### 0.7.2 (2018-03-19)

- Removes arithmetic progression classification method.

- Also allow to create proportionnal symbols map when analyzing a layer of points.

- Allow to use rounded corners on rectangles available as layout features.

- Slightly change the behavior when a result layer is added by not fitting anymore the viewport on it.

- Fix the "fit-zoom" behavior when using Armadillo projection and a layer at world scale.

- Change the stewart implementation to consume less memory (smoomapy package is dropped temporarily).


#### 0.7.1 (2018-03-09)

- Fix typos in documentation.

- Add a new option for proportionnal symbols legends, allowing to display a line between the symbol and the value.

- Enable the (still experimental) auto-alignment feature for text annotation.


#### 0.7.0 (2018-03-05)

- New: allow to analyze a layer of points by two means : through a regular grid or through an existing layer of polygons. Informations computed are either the density of items (weighted or not) in each cell/polygon or a statistical summary (mean or standard deviation) about the items belonging to each cell/polygon.


#### 0.6.7 (2018-02-01)

- Fix links creation on some cases when using integers as identifiers.


#### 0.6.6 (2018-01-19)

- Fix/improve some styling options in links menu and in links classification box.

- Fix error occuring on labels creation when using a target layer with empty geometries and warn the user if it's the case (as for the other representations).


#### 0.6.5 (2018-01-12)

- Be more tolerant with in the regular expression used to filter the name of exported maps (by allowing dot, dash and parantheses for example).

- Fix the displaying of the "waiting" overlay when loading a TopoJSON layer.

- Fix the displaying of the "horizontal layout" option for legend when used on a categorical choropleth map + rounding precision for "horizontal layout" legend and "proportionnal symbols" legend.

- Fix bug when changing layer name when using particularily long names.

- Compute jenks natural breaks in a web worker if the dataset contains more than 7500 features.


#### 0.6.4 (2017-12-22)

- Slightly change how field type is determined.

- Try to improve the 'active'/'pushed' effect on buttons located on the bottom-right of the map.

- Try to be lighter on the use of memory (by reducing the TTL of redis entries and by not saving (for later reuse) intermediate results anymore when computing potentials).

- Explicitly set locale and language parameters on docker image and make a better sanitizing of layer names.


#### 0.6.3 (2017-12-14)

- Fix encoding issue of some sample basemaps (introduced in 0.6.1).

- Fix some errors that appeared when loading some datasets (especially while converting a csv to geojson when some cells of the coordinate columns contains weird stuff).

- Fix error with line height on text annotation with custom font when reloading a project file.


#### 0.6.2 (2017-12-12)

- Fix bug when importing shapefiles (due to wrong hash computation / was introduced in 0.6.1).


#### 0.6.1 (2017-12-11)

- New: add a new kind of layout for legends in use for choropleth maps.

- New: allow to create labels according to the values of a given field (such as creating "Name" labels only for cities with larger "Population" than xxx)

- Fix some bugs occuring while loading user files and improve the support for tabular file containing coordinates.

- Fix some typos in the interface and improve the displaying of the projection name when the projection is coming from a proj.4 string.

- Slightly improve support for Edge and Safari.


#### 0.6.0 (2017-11-29)

- New: ask the user if he wants to remove the un-joined features from his basemap (after a partial join).

- New: allow to make proportionnal links (ie. without data classification, only graduated links were available until now).

- New: add some new basemaps for France.


#### 0.5.7 (2017-11-08)

- Fix minors typo in french translation.

- Fix bug preventing to modify the number of class when using a diverging classification scheme.


#### 0.5.6 (2017-10-31)

- Fix bug with projection rotation properties not applied when reloading a project file.


#### 0.5.5 (2017-10-12)

- Fix bug with pictogram displaying in the appropriate box.


#### 0.5.4 (2017-10-01)

- Change the default font used in text/tspan SVG elements (in favor of verdana). Should fix (for real this time?) the bug occuring while trying to open the resulting SVG file with some software on systems where the font in use is not available (notably Adobe Illustrator v16.0 CS6 on MacOSX).

- Disable the ability to use sphere and graticule with lambert conic conformal projection (the generated path, which is currently not clipped when using Proj4 projections, could be very heavy due to the conical nature of the projection).

- Allow to cancel the ongoing addition of a layout item by pressing Esc (and so inform the user about that in the notification).

- Improve the legend for proportionnal symbols (only for "single color" ones) by also using the stroke color of the result layer in the legend.

- Add "Bertin 1953" projection to the list of available projections.


#### 0.5.3 (2017-09-22)

- Change the default font used in text/tspan SVG elements (in favor of Arial). Should fix the bug occuring while trying to open the resulting SVG file with some software on systems where the font in use is not available (notably Adobe Illustrator v16.0 CS6 on MacOSX).


#### 0.5.2 (2017-09-13)

- Fix graticule style edition.


#### 0.5.1 (2017-09-08)

- Improve how rectangles are drawn and edited.

- Fix the tooltip displaying proj.4 string.

- Allow to select projection from EPSG code and display it's name in the menu.

- Allow to reuse the colors and labels from an existing categorical layer.

- Change the layout of the box displaying the table.


#### 0.5.0 (2017-08-24)

- Allow to create, use (and re-use) custom palette for choropleth maps.

- Allow to hide/display the head of arrows.

- Notable change: some old project-files may no longer be loaded correctly (the impact is really quite limited, but precisely, the overlay order of layout features could be incorrect when opening these old project-files).

- Fix error with legend customization box after changing the layer name.

- Re-allow to display the table of the joined dataset and improve the table layout.

- Improve handling of fields containing mixed numerical and not numerical values for some representations.


#### 0.4.1 (2017-08-14)

- Fix background color when exporting to svg.

- Fix property box not opening on pictograms layer.

- Don't apply clipping path to pictograms layers nor symbols layers.

- Change the overlay displayed when a layer is loading.


#### 0.4.0 (2017-07-24)
------------------

- Fix error occuring on some representations when using a target layer with empty geometries and warn the user if it's the case.

- Introduce a new representation, waffle map, for mapping two (or more) comparable stocks together.


#### 0.3.7 (2017-07-17)
------------------

- Fix error on jointure.

- Fix location of red square when moving proportionnal symbols.

- Fix legend size on links and discontinuities when zooming.


#### 0.3.6 (2017-06-30)
------------------

- Fix selection on links map (was only working with specific field name).


#### 0.3.5 (2017-06-28)
------------------

- Allow to edit the location of proportionnal symbols

- Slightly change the behavior with proj4 projections when layers are added/removed


#### 0.3.4 (2017-06-22)

- Fix the "auto-align" feature behavior for the new text annotation.

- Fix graticule not showing correctly when opening result svg file with Adobe Illustrator.

- Fix the jointure failing since 0.3.3.

- New: Allow to change the name of the layers at any time.


#### 0.3.3 (2017-06-15)

- Allow to add more than one sphere background (#26).

- Add default projection for sample basemaps.


#### 0.3.2 (2017-06-09)

- Fix text annotation behavior when clicking on "cancel".

- Fix legend displaying "false" after reloading (when size was not fixed).

- Switch color between "OK" and "Cancel" buttons on modal box.


#### 0.3.1 (2017-06-08)

- Correction d'une erreur dans la récupération des valeurs lors de la création d'un cartogramme.


#### 0.3.0 (2017-06-07)

- Correction de bugs dans la lecture des fichiers CSV : meilleur support de certains encodages + corrige erreur lors de la lecture de fichier dont la première colonne contient un nom vide.

- Ajout d'une fonctionnalité permettant de sélectionner l'alignement (gauche, centré, droite) du texte dans les annotations de texte.

- Changement dans le numérotage des versions (afin de suivre les règles du SemVer)

- Correction d'un bug concernant la projection Lambert 93, accessible depuis de le manu d'accès rapide aux projections (l'affichage était inexistant à certains niveaux de zoom)

- Suppression de deux projections pouvant être considérées comme redondantes.

- Correction d'un bug dans le choix de la taille des pictogrammes.

- Correction d'un bug concernant l'ordre dans lequel les éléments d'habillage sont affichés lors du rechargement d'un projet.