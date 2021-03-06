/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.cpp
 #	source generated by 4D Plugin Wizard
 #	Project : Houdini
 #	author : miyako
 #	2016/04/16
 #
 # --------------------------------------------------------------------------------*/


#include "4DPluginAPI.h"
#include "4DPlugin.h"
#include "houdini/houdini.h"

void PluginMain(PA_long32 selector, PA_PluginParameters params)
{
	try
	{
		PA_long32 pProcNum = selector;
		sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
		PackagePtr pParams = (PackagePtr)params->fParameters;

		CommandDispatcher(pProcNum, pResult, pParams); 
	}
	catch(...)
	{

	}
}

void CommandDispatcher (PA_long32 pProcNum, sLONG_PTR *pResult, PackagePtr pParams)
{
	switch(pProcNum)
	{
// --- Houdini

		case 1 :
			Houdini_Escape_XML(pResult, pParams);
			break;

		case 2 :
			Houdini_Unescape_HTML(pResult, pParams);
			break;

		case 3 :
			Houdini_Escape_HTML(pResult, pParams);
			break;

		case 4 :
			Houdini_Escape_URI(pResult, pParams);
			break;

		case 5 :
			Houdini_Escape_URL(pResult, pParams);
			break;

		case 6 :
			Houdini_Escape_HREF(pResult, pParams);
			break;

		case 7 :
			Houdini_Unescape_URI(pResult, pParams);
			break;

		case 8 :
			Houdini_Unescape_URL(pResult, pParams);
			break;

		case 9 :
			Houdini_Escape_JS(pResult, pParams);
			break;

		case 10 :
			Houdini_Unescape_JS(pResult, pParams);
			break;

	}
}

// ------------------------------------ Houdini -----------------------------------


void Houdini_Escape_XML(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_escape_xml(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Unescape_HTML(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_unescape_html(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Escape_HTML(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT Param3;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	Param3.fromParamAtIndex(pParams, 3);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_escape_html0(&ob, src.c_str(), src.size(), Param3.getIntValue());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Escape_URI(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_escape_uri(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Escape_URL(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_escape_url(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Escape_HREF(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_escape_href(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Unescape_URI(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_unescape_uri(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Unescape_URL(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_unescape_url(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Escape_JS(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_escape_js(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}

void Houdini_Unescape_JS(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1;
	C_TEXT Param2;
	C_LONGINT returnValue;
	
	Param1.fromParamAtIndex(pParams, 1);
	
	CUTF8String src;
	Param1.copyUTF8String(&src);
	
	gh_buf ob;
	gh_buf_init(&ob, 0);
	
	int success = houdini_unescape_js(&ob, src.c_str(), src.size());
	
	if(success)
		Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
	
	gh_buf_free(&ob);
	
	Param2.toParamAtIndex(pParams, 2);
	returnValue.setIntValue(success);
	returnValue.setReturn(pResult);
}
