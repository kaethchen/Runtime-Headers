@class NSString, ASDServiceBroker;

@interface ASDRepairService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;

- (void).cxx_destruct;
- (void)refreshKeybagWithReplyHandler:(id /* block */)a0;
- (void)repairAppWithOptions:(id)a0 replyHandler:(id /* block */)a1;

@end
