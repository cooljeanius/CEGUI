// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Texture.pypp.hpp"

namespace bp = boost::python;

struct Texture_wrapper : CEGUI::Texture, bp::wrapper< CEGUI::Texture > {

    Texture_wrapper()
    : CEGUI::Texture()
      , bp::wrapper< CEGUI::Texture >(){
        // null constructor
        
    }

    virtual ::CEGUI::Size const & getOriginalDataSize(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::CEGUI::Size const & getSize(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::CEGUI::Vector2 const & getTexelScaling(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual void loadFromFile( ::CEGUI::String const & filename, ::CEGUI::String const & resourceGroup ){
        bp::override func_loadFromFile = this->get_override( "loadFromFile" );
        func_loadFromFile( boost::ref(filename), boost::ref(resourceGroup) );
    }

    virtual void loadFromMemory( void const * buffer, ::CEGUI::Size const & buffer_size, ::CEGUI::Texture::PixelFormat pixel_format ){
        bp::override func_loadFromMemory = this->get_override( "loadFromMemory" );
        func_loadFromMemory( buffer, boost::ref(buffer_size), pixel_format );
    }

    virtual void saveToMemory( void * buffer ){
        bp::override func_saveToMemory = this->get_override( "saveToMemory" );
        func_saveToMemory( buffer );
    }

};

void register_Texture_class(){

    { //::CEGUI::Texture
        typedef bp::class_< Texture_wrapper, boost::noncopyable > Texture_exposer_t;
        Texture_exposer_t Texture_exposer = Texture_exposer_t( "Texture", "*!\n\
        \n\
            Abstract base class specifying the required interface for Texture objects.\n\
        \n\
            Texture objects are created via the Renderer.  The actual inner workings of\n\
            any Texture object are dependant upon the Renderer (and underlying API) in\n\
            use.  This base class defines the minimal set of functions that is required\n\
            for the rest of the system to work.  Texture objects are only created\n\
            through the Renderer object's texture creation functions.\n\
        *\n" );
        bp::scope Texture_scope( Texture_exposer );
        bp::enum_< CEGUI::Texture::PixelFormat>("PixelFormat")
            .value("PF_RGB", CEGUI::Texture::PF_RGB)
            .value("PF_RGBA", CEGUI::Texture::PF_RGBA)
            .export_values()
            ;
        { //::CEGUI::Texture::getOriginalDataSize
        
            typedef ::CEGUI::Size const & ( ::CEGUI::Texture::*getOriginalDataSize_function_type )(  ) const;
            
            Texture_exposer.def( 
                "getOriginalDataSize"
                , bp::pure_virtual( getOriginalDataSize_function_type(&::CEGUI::Texture::getOriginalDataSize) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the original pixel size of the data loaded into the texture.\n\
            \n\
                @return\n\
                    reference to a Size object that describes the original size, in pixels,\n\
                    of the data loaded into the texture.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::getSize
        
            typedef ::CEGUI::Size const & ( ::CEGUI::Texture::*getSize_function_type )(  ) const;
            
            Texture_exposer.def( 
                "getSize"
                , bp::pure_virtual( getSize_function_type(&::CEGUI::Texture::getSize) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the current pixel size of the texture.\n\
            \n\
                @return\n\
                    Reference to a Size object that describes the size of the texture in\n\
                    pixels.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::getTexelScaling
        
            typedef ::CEGUI::Vector2 const & ( ::CEGUI::Texture::*getTexelScaling_function_type )(  ) const;
            
            Texture_exposer.def( 
                "getTexelScaling"
                , bp::pure_virtual( getTexelScaling_function_type(&::CEGUI::Texture::getTexelScaling) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns pixel to texel scale values that should be used for converting\n\
                    pixel values to texture co-ords.\n\
            \n\
                @return\n\
                    Reference to a Vector2 object that describes the scaling values required\n\
                    to accurately map pixel positions to texture co-ordinates.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::loadFromFile
        
            typedef void ( ::CEGUI::Texture::*loadFromFile_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            Texture_exposer.def( 
                "loadFromFile"
                , bp::pure_virtual( loadFromFile_function_type(&::CEGUI::Texture::loadFromFile) )
                , ( bp::arg("filename"), bp::arg("resourceGroup") )
                , "*!\n\
                \n\
                    Loads the specified image file into the texture.  The texture is resized\n\
                    as required to hold the image.\n\
            \n\
                @param filename\n\
                    The filename of the image file that is to be loaded into the texture\n\
            \n\
                @param resourceGroup\n\
                    Resource group identifier to be passed to the resource provider when\n\
                    loading the image file.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::loadFromMemory
        
            typedef void ( ::CEGUI::Texture::*loadFromMemory_function_type )( void const *,::CEGUI::Size const &,::CEGUI::Texture::PixelFormat ) ;
            
            Texture_exposer.def( 
                "loadFromMemory"
                , bp::pure_virtual( loadFromMemory_function_type(&::CEGUI::Texture::loadFromMemory) )
                , ( bp::arg("buffer"), bp::arg("buffer_size"), bp::arg("pixel_format") ) );
        
        }
        { //::CEGUI::Texture::saveToMemory
        
            typedef void ( ::CEGUI::Texture::*saveToMemory_function_type )( void * ) ;
            
            Texture_exposer.def( 
                "saveToMemory"
                , bp::pure_virtual( saveToMemory_function_type(&::CEGUI::Texture::saveToMemory) )
                , ( bp::arg("buffer") )
                , "*!\n\
                \n\
                    Save  dump the content of the texture to a memory buffer.  The dumped\n\
                    pixel format is always RGBA (4 bytes per pixel).\n\
            \n\
                @param buffer\n\
                    Pointer to the buffer that is to receive the image data.  You must make\n\
                    sure that this buffer is large enough to hold the dumped texture data,\n\
                    the required pixel dimensions can be established by calling getSize.\n\
                *\n" );
        
        }
    }

}
