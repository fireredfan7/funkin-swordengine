// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_media_AudioContext
#define INCLUDED_lime_media_AudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,AudioContext)
HX_DECLARE_CLASS2(lime,media,FlashAudioContext)
HX_DECLARE_CLASS2(lime,media,HTML5AudioContext)
HX_DECLARE_CLASS2(lime,media,OpenALAudioContext)
HX_DECLARE_CLASS2(lime,media,WebAudioContext)

namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES AudioContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AudioContext_obj OBJ_;
		AudioContext_obj();

	public:
		enum { _hx_ClassId = 0x504d7de4 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.media.AudioContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.media.AudioContext"); }
		static ::hx::ObjectPtr< AudioContext_obj > __new(::String type);
		static ::hx::ObjectPtr< AudioContext_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AudioContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AudioContext",d9,f7,04,ed); }

		 ::Dynamic custom;
		 ::lime::media::FlashAudioContext flash;
		 ::lime::media::HTML5AudioContext html5;
		 ::lime::media::OpenALAudioContext openal;
		::String type;
		 ::lime::media::WebAudioContext web;
};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_AudioContext */ 
