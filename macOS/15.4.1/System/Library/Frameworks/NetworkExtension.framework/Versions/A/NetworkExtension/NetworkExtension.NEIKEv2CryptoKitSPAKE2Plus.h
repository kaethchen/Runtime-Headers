@interface NetworkExtension.NEIKEv2CryptoKitSPAKE2Plus : NSObject {
    void /* unknown type, empty encoding */ role;
    void /* unknown type, empty encoding */ prover;
    void /* unknown type, empty encoding */ verifier;
}

- (id)init;
- (void).cxx_destruct;
- (id)processSecondPeerMessage:(id)a0 error:(id *)a1;
- (id)getFirstMessageAndReturnError:(id *)a0;
- (id)initWithSeed:(id)a0 initiatorID:(id)a1 responderID:(id)a2 salt:(id)a3 context:(id)a4 forInitiator:(BOOL)a5 error:(id *)a6;
- (id)processFirstPeerMessage:(id)a0 error:(id *)a1;

@end
