@class NSArray, NSData, ECDKIMVerifiableMessage, ECRawMessageHeaders;

@interface ECDKIMVerificationContext : NSObject

@property (copy, nonatomic) NSArray *dkimSignatureHeaders;
@property (readonly, nonatomic) ECDKIMVerifiableMessage *verifiableMessage;
@property (readonly, nonatomic) ECRawMessageHeaders *headers;
@property (readonly, copy, nonatomic) NSData *bodyData;
@property (nonatomic) BOOL requireFullBodySignature;

- (void).cxx_destruct;
- (void)removeDKIMSignatureHeaders:(id)a0;
- (id)initWithVerifiableMessage:(id)a0 dkimSignatureHeaders:(id)a1;

@end
