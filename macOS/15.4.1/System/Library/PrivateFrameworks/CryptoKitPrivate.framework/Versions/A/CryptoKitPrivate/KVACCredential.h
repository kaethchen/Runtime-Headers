@class _TtC16CryptoKitPrivate21KVACCredentialWrapper;

@interface KVACCredential : NSObject

@property (readonly, retain, nonatomic) _TtC16CryptoKitPrivate21KVACCredentialWrapper *credential;

- (void).cxx_destruct;
- (id)getCredentialDataError:(id *)a0;
- (id)initWithCredentialData:(id)a0 error:(id *)a1;
- (id)initWithCredentialResponseData:(id)a0 client:(id)a1 error:(id *)a2;
- (id)presentWithPresentationContext:(id)a0 error:(id *)a1;

@end
