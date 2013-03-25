// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Scheme.pypp.hpp"

namespace bp = boost::python;

void register_Scheme_class(){

    { //::CEGUI::Scheme
        typedef bp::class_< CEGUI::Scheme, boost::noncopyable > Scheme_exposer_t;
        Scheme_exposer_t Scheme_exposer = Scheme_exposer_t( "Scheme", "*!\n\
        \n\
           A class that groups a set of GUI elements and initialises the system to access those elements.\n\
        \n\
           A GUI Scheme is a high-level construct that loads and initialises various lower-level objects\n\
           and registers them within the system for usage.  So, for example, a Scheme might create some\n\
           Imageset objects, some Font objects, and register a collection of WindowFactory objects within\n\
           the system which would then be in a state to serve those elements to client code.\n\
        *\n", bp::no_init );
        bp::scope Scheme_scope( Scheme_exposer );
        { //::CEGUI::Scheme::getDefaultResourceGroup
        
            typedef ::CEGUI::String const & ( *getDefaultResourceGroup_function_type )(  );
            
            Scheme_exposer.def( 
                "getDefaultResourceGroup"
                , getDefaultResourceGroup_function_type( &::CEGUI::Scheme::getDefaultResourceGroup )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the default resource group currently set for Schemes.\n\
            \n\
                @return\n\
                    String describing the default resource group identifier that will be\n\
                    used when loading Scheme xml file data.\n\
                *\n" );
        
        }
        { //::CEGUI::Scheme::getName
        
            typedef ::CEGUI::String const & ( ::CEGUI::Scheme::*getName_function_type )(  ) const;
            
            Scheme_exposer.def( 
                "getName"
                , getName_function_type( &::CEGUI::Scheme::getName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
               \n\
                  Return the name of this Scheme.\n\
            \n\
               @return\n\
                  String object containing the name of this Scheme.\n\
               *\n" );
        
        }
        { //::CEGUI::Scheme::loadResources
        
            typedef void ( ::CEGUI::Scheme::*loadResources_function_type )(  ) ;
            
            Scheme_exposer.def( 
                "loadResources"
                , loadResources_function_type( &::CEGUI::Scheme::loadResources )
                , "*!\n\
               \n\
                  Loads all resources for this scheme.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::Scheme::resourcesLoaded
        
            typedef bool ( ::CEGUI::Scheme::*resourcesLoaded_function_type )(  ) const;
            
            Scheme_exposer.def( 
                "resourcesLoaded"
                , resourcesLoaded_function_type( &::CEGUI::Scheme::resourcesLoaded )
                , "*!\n\
               \n\
                  Return whether the resources for this Scheme are all loaded.\n\
            \n\
               @return\n\
                  true if all resources for the Scheme are loaded and available, or false of one or more\
                  resource is not currently loaded.\n\
               *\n" );
        
        }
        { //::CEGUI::Scheme::setDefaultResourceGroup
        
            typedef void ( *setDefaultResourceGroup_function_type )( ::CEGUI::String const & );
            
            Scheme_exposer.def( 
                "setDefaultResourceGroup"
                , setDefaultResourceGroup_function_type( &::CEGUI::Scheme::setDefaultResourceGroup )
                , ( bp::arg("resourceGroup") )
                , "*!\n\
                \n\
                    Sets the default resource group to be used when loading scheme xml data\n\
            \n\
                @param resourceGroup\n\
                    String describing the default resource group identifier to be used.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::Scheme::unloadResources
        
            typedef void ( ::CEGUI::Scheme::*unloadResources_function_type )(  ) ;
            
            Scheme_exposer.def( 
                "unloadResources"
                , unloadResources_function_type( &::CEGUI::Scheme::unloadResources )
                , "*!\n\
               \n\
                  Unloads all resources for this scheme.  This should be used very carefully.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        Scheme_exposer.staticmethod( "getDefaultResourceGroup" );
        Scheme_exposer.staticmethod( "setDefaultResourceGroup" );
    }

}
