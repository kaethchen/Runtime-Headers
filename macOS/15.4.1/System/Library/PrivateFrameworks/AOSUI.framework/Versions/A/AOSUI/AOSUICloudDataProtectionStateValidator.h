@class CDPUIDeviceToDeviceEncryptionFlowContext, CDPContext;

@interface AOSUICloudDataProtectionStateValidator : NSObject {
    CDPUIDeviceToDeviceEncryptionFlowContext *_flowContext;
}

@property (retain, nonatomic) CDPContext *context;

- (void).cxx_destruct;
- (BOOL)_isFlowContextValid:(id)a0;
- (id)initWithFlowContext:(id)a0;
- (void)verifyAndRepairCloudDataProtectionWithCompletion:(id /* block */)a0;

@end
