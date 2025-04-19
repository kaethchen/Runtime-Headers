@class SUMacControllerClientRequest, NSMutableArray, SUCoreFSM, SUMacControllerScanEventInfo, SUCoreLog, NSString, SUMacControllerBridgeOSManager, NSObject, SUMacControllerRosettaManager, SUMacControllerRecoveryOSManager, SUCoreScan, SUCoreMobileAsset;
@protocol OS_dispatch_queue;

@interface SUMacControllerScanManager : NSObject <SUCoreFSMDelegate>

@property (retain, nonatomic) SUCoreLog *logger;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (retain, nonatomic) SUCoreScan *coreScanner;
@property (retain, nonatomic) SUCoreFSM *stateMachine;
@property (retain, nonatomic) SUMacControllerBridgeOSManager *bridgeOSManager;
@property (retain, nonatomic) SUMacControllerRosettaManager *rosettaManager;
@property (retain, nonatomic) SUMacControllerRecoveryOSManager *recoveryOSManager;
@property (retain, nonatomic) SUCoreMobileAsset *majorDocumentationMobileAssetControl;
@property (retain, nonatomic) SUCoreMobileAsset *minorDocumentationMobileAssetControl;
@property (retain, nonatomic) SUMacControllerClientRequest *currentClientRequest;
@property (retain, nonatomic) NSMutableArray *duplicateClientRequests;
@property (retain, nonatomic) SUMacControllerScanEventInfo *pendingEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getSUMacControllerScanManagerStateTable;

- (id)init;
- (void).cxx_destruct;
- (long long)actionReportScanProgress:(id)a0 error:(id *)a1;
- (long long)actionScanForUpdateBrain:(id)a0 error:(id *)a1;
- (long long)actionStartupScanManager:(id)a0 error:(id *)a1;
- (long long)actionDecideRequiresDocs:(id)a0 error:(id *)a1;
- (long long)actionRequestScanControl:(id)a0 error:(id *)a1;
- (void)scanForUpdateWithClientRequest:(id)a0;
- (id)_UUIDStringForScanWithOverrides:(id)a0;
- (id)_newConstructedSemiSplatDescriptorWithErrorString:(id *)a0;
- (id)_overridesFromClientRequest:(id)a0;
- (void)_processEndProgressAtPhase:(int)a0 eventInfo:(id)a1;
- (BOOL)_processMajorRosettaUpdateResult:(BOOL)a0 version:(id)a1 underlyingError:(id)a2 eventInfo:(id)a3;
- (BOOL)_processMinorRosettaUpdateResult:(BOOL)a0 version:(id)a1 underlyingError:(id)a2 eventInfo:(id)a3;
- (void)_processUpdateBrainResultWithOverrides:(id)a0 majorBuildVersion:(id)a1 minorBuildVersion:(id)a2 majorBrainDescriptor:(id)a3 minorBrainDescriptor:(id)a4 majorBrainError:(id)a5 minorBrainError:(id)a6 eventInfo:(id)a7;
- (id)_progressNameForPhase:(int)a0;
- (float)_progressPercentForPhase:(int)a0 atStart:(BOOL)a1;
- (void)_registerStateMachineHandlers;
- (void)_reportScanFailedWithMajorError:(id)a0 minorError:(id)a1 completion:(id /* block */)a2;
- (BOOL)_rosettaUpdateRequired;
- (id)_scanReturnError:(id)a0 description:(id)a1;
- (void)_stateSafeAddDuplicateClientRequestWithNewRequest:(id)a0;
- (void)_stateSafeProcessStartProgressAtPhase:(int)a0 eventInfo:(id)a1;
- (void)_stateSafeReportCurrentRequestScanFailedWithMajorError:(id)a0 minorError:(id)a1;
- (void)_stateSafeSFRScanCompletedWithEvent:(id)a0;
- (void)_stateSafeTransferControlSettingPendingEvent:(id)a0;
- (long long)actionCancelCompleted:(id)a0 error:(id *)a1;
- (long long)actionCancelDocumentationDownload:(id)a0 error:(id *)a1;
- (long long)actionDecideRequiresMinorDocs:(id)a0 error:(id *)a1;
- (long long)actionDecideSplat:(id)a0 error:(id *)a1;
- (long long)actionScanCompleted:(id)a0 error:(id *)a1;
- (long long)actionScanControlDenied:(id)a0 error:(id *)a1;
- (long long)actionScanDecideRecoveryOS:(id)a0 error:(id *)a1;
- (long long)actionScanDecideRosetta:(id)a0 error:(id *)a1;
- (long long)actionScanDecideSupportSoftware:(id)a0 error:(id *)a1;
- (long long)actionScanForBridgeOS:(id)a0 error:(id *)a1;
- (long long)actionScanForBridgeOSComplete:(id)a0 error:(id *)a1;
- (long long)actionScanForMajorBridgeOS:(id)a0 error:(id *)a1;
- (long long)actionScanForMajorDocumentation:(id)a0 error:(id *)a1;
- (long long)actionScanForMinorBridgeOS:(id)a0 error:(id *)a1;
- (long long)actionScanForMinorDocumentation:(id)a0 error:(id *)a1;
- (long long)actionScanForRecoveryOS:(id)a0 error:(id *)a1;
- (long long)actionScanForRosetta:(id)a0 error:(id *)a1;
- (long long)actionScanForSFR:(id)a0 error:(id *)a1;
- (long long)actionScanForSoftwareUpdates:(id)a0 error:(id *)a1;
- (long long)actionScanForSplatUpdates:(id)a0 error:(id *)a1;
- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (void)queryCurrentStateWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)scanForSFRUpdateWithClientRequest:(id)a0 targetRestoreVersion:(id)a1 targetBuildVersion:(id)a2 targetProductVersion:(id)a3;
- (void)scanForSplatWithClientRequest:(id)a0;

@end
