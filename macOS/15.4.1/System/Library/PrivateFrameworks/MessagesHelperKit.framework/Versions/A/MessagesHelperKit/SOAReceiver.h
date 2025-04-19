@class NSString, SOAController;

@interface SOAReceiver : NSObject <SOAReceiverProtocol>

@property (weak) SOAController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)setupComplete;
- (void)addDefaultsObject:(id)a0 toCollection:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeDefaultsObject:(id)a0 fromCollection:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeDefaultsObjectForKey:(id)a0 inCollection:(id)a1 completionBlock:(id /* block */)a2;
- (void)setDefaultsObject:(id)a0 forKey:(id)a1 completionBlock:(id /* block */)a2;
- (void)setDefaultsObject:(id)a0 forKey:(id)a1 inCollection:(id)a2 completionBlock:(id /* block */)a3;
- (void)connectionDied:(id)a0;

@end
