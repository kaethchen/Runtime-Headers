@interface IMCoreCommSafetyHelper : NSObject

+ (id)sharedInstance;

- (void)addressesForParents:(id)a0 completion:(id /* block */)a1;
- (id)_urlFromAddressList:(id)a0;
- (void)getOpenChatURLWith:(id /* block */)a0;

@end
