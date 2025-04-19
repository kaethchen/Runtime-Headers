@class NSUUID, BOSBrainBundle, NSURL, NSString, PKFirmwareBundleComponent, NSData, NSDictionary, BOSUpdateBundle, NSObject, BridgeOSSoftwareUpdateController;
@protocol OS_dispatch_queue;

@interface BOSRequest : NSObject

@property (retain) NSDictionary *bridgeOSSoftwareUpdateControllerState;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property unsigned long long retriesAfterFatalError;
@property unsigned long long retriesAfterConnectionFailure;
@property (retain) BOSUpdateBundle *updateBundle;
@property (retain) BOSBrainBundle *brainBundle;
@property (retain) NSURL *extractedUpdateBundleURL;
@property (retain) NSURL *extractedBrainBundleURL;
@property (retain) BridgeOSSoftwareUpdateController *customBridgeOSSoftwareUpdateController;
@property BOOL shouldPurge;
@property (retain) NSUUID *sessionUUID;
@property unsigned long long action;
@property (readonly) NSString *actionDescription;
@property (retain) NSURL *updateBundleURL;
@property (retain) NSURL *brainBundleURL;
@property (retain) PKFirmwareBundleComponent *updateBundlePackageComponent;
@property (retain) PKFirmwareBundleComponent *brainBundlePackageComponent;
@property (retain) NSString *client;
@property BOOL enableSSO;
@property (retain) NSData *appleConnectData;
@property BOOL showUI;
@property BOOL cleanInstall;
@property BOOL loopbackEnabled;
@property BOOL testModeEnabled;
@property unsigned long long maxRetriesAfterFatalError;
@property unsigned long long maxRetriesAfterConnectionFailure;
@property (retain) NSString *minimumBridgeOSVersionRequirement;
@property (retain) NSURL *bridgeOSSoftwareUpdateEventRecordingServiceURL;
@property (retain) NSURL *personalizationServerURL;
@property (retain) NSURL *predicateProductOriginatingCatalogURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)clientContext;
- (id)errorUserInfo;
- (BOOL)_parseArugments:(const char **)a0 length:(int)a1;
- (void)_printUsageForExecutableNamed:(id)a0;
- (void)_setPropertiesFromOptions:(id)a0;
- (id)initWithArgs:(const char **)a0 length:(int)a1;
- (id)bridgeOSSoftwareUpdateControllerOptions;
- (BOOL)clientContextIsEqualTo:(id)a0;

@end
