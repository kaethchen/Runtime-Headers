@class HMHome, NSString;

@interface HMModernMessagingClient : HMFObject <HMFLogging>

@property (readonly, weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *idsTopic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initWithHome:(id)a0 idsTopic:(id)a1;
- (void)registerModernMessagingRequestHandlerWithMessageName:(id)a0 options:(id)a1 requestHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)sendModernMessagingRequestWithMessageName:(id)a0 destination:(id)a1 requestPayload:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)unregisterModernMessagingRequestHandlerWithMessageName:(id)a0 completionHandler:(id /* block */)a1;

@end
