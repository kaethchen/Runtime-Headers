@class NSObject;
@protocol OS_os_log, ASCAppLaunchTrampolineWorkspace;

@interface ASCAppLaunchTrampoline : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSObject<ASCAppLaunchTrampolineWorkspace> *workspace;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)a0;
- (id)handleURL:(id)a0;
- (id)handleURL:(id)a0 workspace:(id)a1;
- (id)openApplicationWithBundleIdentifier:(id)a0 payloadURL:(id)a1;
- (id)openApplicationWithBundleIdentifier:(id)a0 payloadURL:(id)a1 universalLinkRequired:(BOOL)a2;
- (id)openApplicationWithBundleIdentifier:(id)a0 payloadURL:(id)a1 universalLinkRequired:(BOOL)a2 workspace:(id)a3;
- (id)openApplicationWithBundleIdentifier:(id)a0 payloadURL:(id)a1 workspace:(id)a2;
- (id)productPageURLForAdamId:(id)a0 deeplink:(id)a1 eventId:(id)a2 encodedMetrics:(id)a3 sourceApplication:(id)a4;
- (id)productPageURLForAdamId:(id)a0 eventId:(id)a1;
- (id)productPageURLForAdamId:(id)a0 eventId:(id)a1 encodedMetrics:(id)a2;
- (id)productPageURLForAdamId:(id)a0 eventId:(id)a1 encodedMetrics:(id)a2 sourceApplication:(id)a3;

@end
