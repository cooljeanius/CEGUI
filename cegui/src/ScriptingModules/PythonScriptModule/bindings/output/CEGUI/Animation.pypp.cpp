// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Animation.pypp.hpp"

namespace bp = boost::python;

void register_Animation_class(){

    { //::CEGUI::Animation
        typedef bp::class_< CEGUI::Animation > Animation_exposer_t;
        Animation_exposer_t Animation_exposer = Animation_exposer_t( "Animation", "*!\n\
        \n\
            Defines an 'animation' class\n\
        \n\
            This is definition of Animation. Can be reused multiple times via\n\
            AnimationInstance class. You can't step this class directly, you have to\n\
            instantiate it via AnimationManager.instantiateAnimation.\n\
        \n\
            AnimationInstance provides means for stepping the animation and applying\n\
            it to PropertySets.\n\
        \n\
        \n\
            Animation itself doesn't contain key frames. It is composed of Affector(s).\n\
            Each Affector affects one Property. So one Animation can affect multiple\n\
            properties.\n\
        \n\
        @see\n\
            AnimationInstance, Affector\n\
        *\n", bp::init< CEGUI::String const & >(( bp::arg("name") ), "** internal constructor, please only construct animations via\n\
         * AnimationManager.createAnimation method\n\
         *\n") );
        bp::scope Animation_scope( Animation_exposer );
        bp::enum_< CEGUI::Animation::ReplayMode>("ReplayMode")
            .value("RM_Once", CEGUI::Animation::RM_Once)
            .value("RM_Loop", CEGUI::Animation::RM_Loop)
            .value("RM_Bounce", CEGUI::Animation::RM_Bounce)
            .export_values()
            ;
        bp::implicitly_convertible< CEGUI::String const &, CEGUI::Animation >();
        { //::CEGUI::Animation::apply
        
            typedef void ( ::CEGUI::Animation::*apply_function_type )( ::CEGUI::AnimationInstance * ) ;
            
            Animation_exposer.def( 
                "apply"
                , apply_function_type( &::CEGUI::Animation::apply )
                , ( bp::arg("instance") )
                , "*!\n\
                \n\
                    Applies this Animation definition using information from given\n\
                    AnimationInstance\n\
            \n\
                \n\
                    This is internal method, only use if you know what you're doing!\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::autoSubscribe
        
            typedef void ( ::CEGUI::Animation::*autoSubscribe_function_type )( ::CEGUI::AnimationInstance * ) ;
            
            Animation_exposer.def( 
                "autoSubscribe"
                , autoSubscribe_function_type( &::CEGUI::Animation::autoSubscribe )
                , ( bp::arg("instance") )
                , "*!\n\
                \n\
                    Subscribes all auto subscriptions with information from given animation\n\
                    instance\n\
            \n\
                \n\
                    This is internal method! Only use if you know what you're doing!\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::autoUnsubscribe
        
            typedef void ( ::CEGUI::Animation::*autoUnsubscribe_function_type )( ::CEGUI::AnimationInstance * ) ;
            
            Animation_exposer.def( 
                "autoUnsubscribe"
                , autoUnsubscribe_function_type( &::CEGUI::Animation::autoUnsubscribe )
                , ( bp::arg("instance") )
                , "*!\n\
                \n\
                    Unsubscribes all auto subscriptions with information from given\n\
                    animation instance\n\
            \n\
                \n\
                    This is internal method! Only use if you know what you're doing!\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::createAffector
        
            typedef ::CEGUI::Affector * ( ::CEGUI::Animation::*createAffector_function_type )(  ) ;
            
            Animation_exposer.def( 
                "createAffector"
                , createAffector_function_type( &::CEGUI::Animation::createAffector )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Creates a new Affector\n\
            \n\
                @see\n\
                    Affector\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::createAffector
        
            typedef ::CEGUI::Affector * ( ::CEGUI::Animation::*createAffector_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            Animation_exposer.def( 
                "createAffector"
                , createAffector_function_type( &::CEGUI::Animation::createAffector )
                , ( bp::arg("targetProperty"), bp::arg("interpolator") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Creates a new Affector\n\
            \n\
                \n\
                    This is just a helper, finger saving method.\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::defineAutoSubscription
        
            typedef void ( ::CEGUI::Animation::*defineAutoSubscription_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            Animation_exposer.def( 
                "defineAutoSubscription"
                , defineAutoSubscription_function_type( &::CEGUI::Animation::defineAutoSubscription )
                , ( bp::arg("eventName"), bp::arg("action") )
                , "*!\n\
                \n\
                    This defined a new auto subscription.\n\
            \n\
                @param\n\
                    eventName the name of the event we want to subscribe to,\n\
                    CEGUI.Window.EventClicked for example\n\
            \n\
                @param\n\
                    action is the action that will be invoked on the animation instance if\n\
                    this event is fired\n\
            \n\
                \n\
                    Auto Subscription does subscribe to event sender (usually target window)\n\
                    of Animation Instance when the event source is set.\n\
            \n\
                    Usable action strings:\n\
                    - Start\n\
                    - Stop\n\
                    - Pause\n\
                    - Unpause\n\
                    - TogglePause\n\
            \n\
                    eventName is the name of the event we want to subscribe to\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::destroyAffector
        
            typedef void ( ::CEGUI::Animation::*destroyAffector_function_type )( ::CEGUI::Affector * ) ;
            
            Animation_exposer.def( 
                "destroyAffector"
                , destroyAffector_function_type( &::CEGUI::Animation::destroyAffector )
                , ( bp::arg("affector") )
                , "*!\n\
            \n\
                Destroys given Affector\n\
            *\n" );
        
        }
        { //::CEGUI::Animation::getAffectorAtIdx
        
            typedef ::CEGUI::Affector * ( ::CEGUI::Animation::*getAffectorAtIdx_function_type )( ::size_t ) const;
            
            Animation_exposer.def( 
                "getAffectorAtIdx"
                , getAffectorAtIdx_function_type( &::CEGUI::Animation::getAffectorAtIdx )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Retrieves the Affector at given index\n\
            *\n" );
        
        }
        { //::CEGUI::Animation::getAutoStart
        
            typedef bool ( ::CEGUI::Animation::*getAutoStart_function_type )(  ) const;
            
            Animation_exposer.def( 
                "getAutoStart"
                , getAutoStart_function_type( &::CEGUI::Animation::getAutoStart )
                , "*!\n\
                \n\
                    Retrieves auto start.\n\
            \n\
                @see\n\
                    Animation.setAutoStart\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::getDuration
        
            typedef float ( ::CEGUI::Animation::*getDuration_function_type )(  ) const;
            
            Animation_exposer.def( 
                "getDuration"
                , getDuration_function_type( &::CEGUI::Animation::getDuration )
                , "*!\n\
            \n\
                Retrieves the duration of this animation\n\
            *\n" );
        
        }
        { //::CEGUI::Animation::getName
        
            typedef ::CEGUI::String const & ( ::CEGUI::Animation::*getName_function_type )(  ) const;
            
            Animation_exposer.def( 
                "getName"
                , getName_function_type( &::CEGUI::Animation::getName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
            \n\
                Retrieves name of this Animation definition\n\
            *\n" );
        
        }
        { //::CEGUI::Animation::getNumAffectors
        
            typedef ::size_t ( ::CEGUI::Animation::*getNumAffectors_function_type )(  ) const;
            
            Animation_exposer.def( 
                "getNumAffectors"
                , getNumAffectors_function_type( &::CEGUI::Animation::getNumAffectors )
                , "*!\n\
            \n\
                Retrieves number of Affectors defined in this Animation\n\
            *\n" );
        
        }
        { //::CEGUI::Animation::getReplayMode
        
            typedef ::CEGUI::Animation::ReplayMode ( ::CEGUI::Animation::*getReplayMode_function_type )(  ) const;
            
            Animation_exposer.def( 
                "getReplayMode"
                , getReplayMode_function_type( &::CEGUI::Animation::getReplayMode )
                , "*!\n\
            \n\
                Retrieves the replay mode of this animation\n\
            *\n" );
        
        }
        { //::CEGUI::Animation::savePropertyValues
        
            typedef void ( ::CEGUI::Animation::*savePropertyValues_function_type )( ::CEGUI::AnimationInstance * ) ;
            
            Animation_exposer.def( 
                "savePropertyValues"
                , savePropertyValues_function_type( &::CEGUI::Animation::savePropertyValues )
                , ( bp::arg("instance") )
                , "*!\n\
                 \n\
                    Internal method, causes all properties that are used by this animation\n\
                    and it's affectors to be saved\n\
            \n\
                \n\
                    So their values are still known after\n\
                    they've been affected.\n\
                 *\n" );
        
        }
        { //::CEGUI::Animation::setAutoStart
        
            typedef void ( ::CEGUI::Animation::*setAutoStart_function_type )( bool ) ;
            
            Animation_exposer.def( 
                "setAutoStart"
                , setAutoStart_function_type( &::CEGUI::Animation::setAutoStart )
                , ( bp::arg("autoStart") )
                , "*!\n\
                \n\
                    Sets whether this animation auto starts or not\n\
            \n\
                \n\
                    Auto start means that the animation instances of this definition call\n\
                    Start on themselves once their target is set.\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::setDuration
        
            typedef void ( ::CEGUI::Animation::*setDuration_function_type )( float ) ;
            
            Animation_exposer.def( 
                "setDuration"
                , setDuration_function_type( &::CEGUI::Animation::setDuration )
                , ( bp::arg("duration") )
                , "*!\n\
            \n\
                Sets the duration of this animation\n\
            *\n" );
        
        }
        { //::CEGUI::Animation::setReplayMode
        
            typedef void ( ::CEGUI::Animation::*setReplayMode_function_type )( ::CEGUI::Animation::ReplayMode ) ;
            
            Animation_exposer.def( 
                "setReplayMode"
                , setReplayMode_function_type( &::CEGUI::Animation::setReplayMode )
                , ( bp::arg("mode") )
                , "*!\n\
            \n\
                Sets the replay mode of this animation\n\
            *\n" );
        
        }
        { //::CEGUI::Animation::undefineAllAutoSubscriptions
        
            typedef void ( ::CEGUI::Animation::*undefineAllAutoSubscriptions_function_type )(  ) ;
            
            Animation_exposer.def( 
                "undefineAllAutoSubscriptions"
                , undefineAllAutoSubscriptions_function_type( &::CEGUI::Animation::undefineAllAutoSubscriptions )
                , "*!\n\
                \n\
                    This undefines all previously defined auto subscriptions.\n\
            \n\
                @see\n\
                    Animation.defineAutoSubscription\n\
                *\n" );
        
        }
        { //::CEGUI::Animation::undefineAutoSubscription
        
            typedef void ( ::CEGUI::Animation::*undefineAutoSubscription_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            Animation_exposer.def( 
                "undefineAutoSubscription"
                , undefineAutoSubscription_function_type( &::CEGUI::Animation::undefineAutoSubscription )
                , ( bp::arg("eventName"), bp::arg("action") )
                , "*!\n\
                \n\
                    This undefines previously defined auto subscription.\n\
            \n\
                @see\n\
                    Animation.defineAutoSubscription\n\
                *\n" );
        
        }
    }

}
