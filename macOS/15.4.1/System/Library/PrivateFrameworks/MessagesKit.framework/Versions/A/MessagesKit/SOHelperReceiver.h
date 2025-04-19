@class SOHelper, NSMutableDictionary, NSString;

@interface SOHelperReceiver : NSObject <SOHelperReceiverProtocol>

@property (retain, nonatomic) NSMutableDictionary *controllerProperties;
@property (weak) SOHelper *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)updateProperties:(id)a0;
- (void)updateDefaults:(id)a0;
- (void)postNotification:(id)a0 userInfo:(id)a1;
- (void)setValue:(id)a0 forControllerKey:(id)a1;
- (void)suspendConnectionWithCompletionBlock:(id /* block */)a0;
- (void)updateDefaultsObject:(id)a0 forKey:(id)a1;

@end
