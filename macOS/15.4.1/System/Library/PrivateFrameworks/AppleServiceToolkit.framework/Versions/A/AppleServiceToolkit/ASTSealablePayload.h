@class NSData, NSString;

@interface ASTSealablePayload : NSObject

@property (retain) NSData *payload;
@property (retain) NSString *base64Signature;
@property (retain) NSData *signature;
@property (getter=isSealed) BOOL sealed;

- (id)description;
- (void).cxx_destruct;
- (id)generatePayload;
- (id)initWithPayload:(id)a0 signature:(id)a1;
- (BOOL)sealWithPayloadSigner:(id /* block */)a0 error:(id *)a1;
- (id)sealedDescription;

@end
