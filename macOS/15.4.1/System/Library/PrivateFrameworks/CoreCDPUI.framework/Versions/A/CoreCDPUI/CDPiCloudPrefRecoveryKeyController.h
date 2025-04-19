@class NSView;

@interface CDPiCloudPrefRecoveryKeyController : CDPRecoveryKeySheetBaseController

@property (retain) NSView *recoveryView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setupCdpRecoveryKeyWithWindow:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
