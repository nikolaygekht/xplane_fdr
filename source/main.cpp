#include "XPLMProcessing.h"
#include "XPLMUtilities.h"

PLUGIN_API int XPluginStart(
                        char *      outName,
                        char *      outSig,
                        char *      outDesc)
{
    XPLMDebugString("NG.FDR: starting\n");
    strcpy(outName, "NG.FDR");
    strcpy(outSig, "ng.xplane.fdr");
    strcpy(outDesc, "Flight Data Recorder Plugin");
    //XPLMRegisterFlightLoopCallback(FDRLoopCB, LOOP_INTERVAL_SECONDS, NULL);
    return 1;
}

PLUGIN_API void XPluginStop(void)
{
    XPLMDebugString("NG.FDR: stopping\n");
    //XPLMUnregisterFlightLoopCallback(FDRLoopCB, NULL);
}

PLUGIN_API void XPluginDisable(void)
{
}

PLUGIN_API int XPluginEnable(void)
{
    return 1;
}

PLUGIN_API void XPluginReceiveMessage(XPLMPluginID    inFromWho, int inMessage, void *inParam)
{

}