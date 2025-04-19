@class NSString;

@interface CKTouchIDSession : NSObject

@property (copy) NSString *message;
@property (copy) NSString *appleID;

- (id)init;
- (void).cxx_destruct;
- (void)getPublicKey:(id /* block */)a0;
- (void)deleteKey:(id /* block */)a0;
- (void)disableTouchIDForPurchases:(id /* block */)a0;
- (void)enableTouchIDForPurchases:(id /* block */)a0;
- (void)getAttestationBlob:(id /* block */)a0;
- (void)getIsTouchIDEnabledForPurchases:(id /* block */)a0;
- (void)getLastTouchIDEnabledDate:(id /* block */)a0;
- (void)getUserAgentComponent:(id /* block */)a0;
- (void)signChallenge:(id)a0 completion:(id /* block */)a1;

@end
