@class MRCryptoPairingSessionBlockDelegate, MRCoreUtilsPairingSession;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession

@property (retain, nonatomic) MRCoreUtilsPairingSession *pairingSession;
@property (retain, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate;
@property (readonly, nonatomic) BOOL hasExchangedMessage;
@property (readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;
@property (readonly, nonatomic) unsigned long long state;

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)close;
- (void)open;
- (void)setDelegate:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)pairedDevices;
- (BOOL)isPaired;
- (void)handlePairingFailureWithStatus:(int)a0;
- (id)decryptData:(id)a0 withError:(id *)a1;
- (BOOL)deleteIdentityWithError:(id *)a0;
- (id)encryptData:(id)a0 withError:(id *)a1;
- (void)handlePairingExchangeData:(id)a0 completion:(id /* block */)a1;
- (id)removePeer;
- (id)updatePeer;

@end
