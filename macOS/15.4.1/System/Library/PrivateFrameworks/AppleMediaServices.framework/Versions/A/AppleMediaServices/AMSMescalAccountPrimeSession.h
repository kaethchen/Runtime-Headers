@class AMSMescalSession;
@protocol AMSBagProtocol;

@interface AMSMescalAccountPrimeSession : NSObject

@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSMescalSession *session;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (id)primeSignatureForData:(id)a0;
- (id)signData:(id)a0;
- (id)verifyPrimeSignature:(id)a0;

@end
