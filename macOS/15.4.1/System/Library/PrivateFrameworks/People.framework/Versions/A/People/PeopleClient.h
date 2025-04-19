@interface PeopleClient : NSObject

- (id)init;
- (void)canSendFamilyAskToBuyIMessageWithCompletion:(id /* block */)a0;
- (void)canSendFamilyScreenTimeRequestIMessageWithCompletion:(id /* block */)a0;
- (void)sendFamilyAskToBuyIMessageWithRequestID:(id)a0 completion:(id /* block */)a1;

@end
