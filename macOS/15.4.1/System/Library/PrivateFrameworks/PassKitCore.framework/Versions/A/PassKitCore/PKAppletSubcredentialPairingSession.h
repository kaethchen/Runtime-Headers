@protocol PKAppletSubcredentialPairingSessionDelegate;

@interface PKAppletSubcredentialPairingSession : PKDASession

@property (weak, nonatomic) id<PKAppletSubcredentialPairingSessionDelegate> delegate;

+ (id)createSessionWithDelegate:(id)a0;

- (id)prewarmWithManufacturerIdentifier:(id)a0;
- (id)probeTerminalForPairingStatus;
- (id)startPairingWithKeyDisplayName:(id)a0 pairingPassword:(id)a1 radioTechnologies:(unsigned long long)a2 bindingAttestation:(id)a3;
- (id)trackSubcredential:(id)a0 encryptedContainer:(id)a1 withReceipt:(id)a2;

@end
