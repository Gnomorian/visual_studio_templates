#visual_studio_templates

##Intro
i whip up alot of c++ projects to test features or ideas and end up doing the same setup over and over.
These are two templates, an executable and a dll.
The Dll template also has all the macros defined and examples as a refresher for how to export functions and classes. aswell as using Visual Studio 2022's new public header feature so you don't have to include them in your referenced projects.

###executable
- the template is configured to be C++20
- have a source and include folder
- a header with a very quick easy to use concatination lambda which i find useful and quick to use for logging

###dll
- c++20 enabled
- a source and include folder
- a header with windows DllExport macros defined and examples on how to use them
- a folder called public_headers. The project is setup to automatically export those headers to referencing projects so you dont have to setup the extra include directories.

##Instructions

### installing the provided template package
- Download the latest release
- copy and paste the \*.zip files to %userprofile%Documents\Visual Studio 2022\Templates\ProjectTemplates\Visual C++ Project
- all done, create a project in visual studio and they should be sorted under C++.

### building the template package yourself
- Open the solution in visual studio 2022
- click project->export template
- make sure 'Project Template' radio button is clicked, press next
- give the template a name, discription etc 
- make sure 'automatically import the template into visual studio'
- then press finish

This will create two \*.zip files. one in %userprofile%Documents\Visual Studio 2022\Templates\ProjectTemplates\ and one in %userprofile%Documents\Visual Studio 2022\ExportedTemplates\.
The one in \*ProjectTemplates is the one visual studio will actually find.

The Template will now be imported but it will not be sorted under C++, you will have to remove all filters in the create project dialog to see it.

To fix this open the the new zip file and modify the \*.vstemplate file. within the <something> tags add the following tag: <