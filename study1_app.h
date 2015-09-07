* E:\SAMUEL\FOXPRO STUDY\STUDY1_APP.H

* This file is a generated, framework-enabling component
* created by APPBUILDER 
* (c) Microsoft Corporation


* header file holding framework-generated project data for
* E:\SAMUEL\FOXPRO STUDY\STUDY1 Project

* the following is for your reference/identification --
* the application object and splash receive this information into
* their cCaption property, and this #DEFINE does not provide it:
* #DEFINE APP_NAME                "study1"


#DEFINE APP_SUPERCLASS         "_application"

* developer can change this one
* to use a different global reference
* if desired -- a BUILD ALL/RECOMPILE
* is required afterwards to synch up
* references in generated menus and PRGs.
#DEFINE APP_GLOBAL              goApp

* This one indicates the member name of the object
* placed on "framework-enabled" forms:
#DEFINE APP_MEDIATOR_NAME       "app_mediator"

* developer can change these to a different subclass
* of APP_SUPERCLASS if desired:
#DEFINE APP_CLASSLIB            "STUDY1_APP.VCX"
#DEFINE APP_CLASSNAME           "app_application"

* the splash class can be anything you want:
#DEFINE APP_SPLASHCLASS         "app_splash"
#DEFINE APP_SPLASHCLASSLIB      "STUDY1_APP.VCX"
* how long should the splash screen stay up if
* no key is pressed and if the app object initializes
* too quickly? (this figure is in seconds)
#DEFINE APP_SPLASHDELAY         3

* the following are localization strings for the wrapper program:
#DEFINE APP_CANNOT_RUN_LOC           "应用程序无法运行。"
#DEFINE APP_ALREADY_RUNNING_LOC      "应用程序已经运行。"
#DEFINE APP_WRONG_SUPERCLASS_LOC     "对不起 -- 该应用程序必须示例"+ CHR(13)+"来自 "+APP_SUPERCLASS+" 的对象。"


* this is a localization string for the menus:                                     
#DEFINE APP_FEATURE_NOT_AVAILABLE_LOC "功能不可用。"

* this one is a hook in the startup program, not
* needed by the framework:
* #DEFINE APP_INITIALIZE          *<Initialize>*

* strictly speaking the 6.0 framework does not
* need the following, but the 5.0 template apps may,
* if they are adapted for the new framework:
* #DEFINE APP_CD                  *<CD>*
* #DEFINE APP_PATH                *<PATH>*


