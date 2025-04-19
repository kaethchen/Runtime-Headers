@interface IFGlobals : NSObject

+ (id)hardwareModel;
+ (BOOL)hasAppleIPAddress;
+ (BOOL)runningFromInstallMedia;
+ (id)installFrameworkVersionString;
+ (id)autoPilotTarget;
+ (id)OSInstallImageLocation;
+ (id)activeLanguage;
+ (BOOL)autoPilot;
+ (BOOL)debugChoiceAttrEngine;
+ (BOOL)debugReadOnlyRoot;
+ (BOOL)dontWriteFiles;
+ (BOOL)enableP2PDownloads;
+ (double)installFrameworkVersion;
+ (BOOL)isCPUSWBuildTrain;
+ (BOOL)isDittoEnabled;
+ (BOOL)isPFScriptModuleEnabled;
+ (BOOL)isPatchDiagnosticEnabled;
+ (void)logMemStats;
+ (void)logSystemInfo;
+ (BOOL)lowMemorySituation;
+ (id)raidOperationQueue;
+ (void)resetIFGlobalsCache;
+ (BOOL)runningInRosetta;
+ (BOOL)runningOnPhysicalIntel;
+ (void)setSpecialFlags:(id)a0;
+ (BOOL)shouldDisableLowPriorityIO;
+ (BOOL)shouldExecuteScripts;
+ (BOOL)shouldShowPerfStats;
+ (BOOL)showVerboseLog;
+ (id)stringForNVRAMVariable:(id)a0;

@end
