@class NSString, SFDeviceOperationHandlerWiFiSetup, SFService, SFDeviceOperationHandlerCDPSetup, SFSession, NSObject, SFClient, SFDeviceOperationHandlerCNJSetup;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVService : NSObject {
    BOOL _activateCalled;
    BOOL _advertiseFast;
    BOOL _invalidateCalled;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    SFDeviceOperationHandlerCNJSetup *_captiveNetworkHandler;
    BOOL _prefCDPEnabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) BOOL isCLIMode;
@property (nonatomic) NSString *forcedPasscode;
@property (copy, nonatomic) id /* block */ appleIDSetupReportHandler;

- (void)dealloc;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_invalidate;
- (void)_sfServiceStart;
- (void)_handleBasicConfigRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handlePreAuthRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleSessionStarted:(id)a0;
- (void)_reportProgress:(unsigned int)a0 info:(id)a1;

@end
