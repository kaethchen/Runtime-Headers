@interface CryptoKitPrivate.KVACCredentialWrapper : NSObject {
    void /* unknown type, empty encoding */ credential;
}

- (id)init;
- (void).cxx_destruct;
- (id)getCredentialDataAndReturnError:(id *)a0;
- (id)initWithCredentialData:(id)a0 error:(id *)a1;
- (id)makePresentationWithPresentationContext:(id)a0 error:(id *)a1;

@end
