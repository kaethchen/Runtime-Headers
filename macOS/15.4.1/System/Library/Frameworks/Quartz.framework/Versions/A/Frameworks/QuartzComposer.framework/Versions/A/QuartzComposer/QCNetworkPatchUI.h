@class NSMatrix, NSTextField;

@interface QCNetworkPatchUI : QCInspector {
    NSMatrix *protocolMatrix;
    NSTextField *ipField_1;
    NSTextField *ipField_2;
    NSTextField *ipField_3;
    NSTextField *ipField_4;
    NSTextField *portField;
}

- (void)_updateUI:(id)a0;
- (void)updateProtocol:(id)a0;
- (void)setupViewForPatch:(id)a0;
- (void)updatePort:(id)a0;

@end
