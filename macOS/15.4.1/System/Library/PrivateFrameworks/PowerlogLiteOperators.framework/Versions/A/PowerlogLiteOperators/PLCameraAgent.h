@class PLXPCListenerOperatorComposition, NSMutableDictionary, NSArray;

@interface PLCameraAgent : PLAgent

@property (retain) NSMutableDictionary *cameraState;
@property (readonly) PLXPCListenerOperatorComposition *cameraUsageNotification;
@property (readonly) PLXPCListenerOperatorComposition *continuityCameraUsageNotification;
@property (retain) NSArray *cameraDevices;

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (int)checkCameraType:(int)a0;
+ (id)entryEventForwardDefinitionCamera;
+ (id)entryEventForwardDefinitionTorch;
+ (id)entryEventIntervalDefinitionSmartCamDetection;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (BOOL)getCameraDeviceGUIdAndLocation:(id)a0;
- (BOOL)getCameraGUIdFromDeviceId:(unsigned int)a0 guid:(id *)a1;
- (BOOL)getCameraLocationFromDeviceId:(unsigned int)a0 location:(unsigned int *)a1;
- (BOOL)getCameraLocationFromGUId:(id)a0 location:(unsigned int *)a1 withRefresh:(BOOL)a2;
- (void)handleMacOSCameraEvent:(id)a0;
- (void)handleMacOSContinuityCameraEvent:(id)a0 withEntryKey:(id)a1;
- (void)refreshMacOSCameraDeviceList;

@end
