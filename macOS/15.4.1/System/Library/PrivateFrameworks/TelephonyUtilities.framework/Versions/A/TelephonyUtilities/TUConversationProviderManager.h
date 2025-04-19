@protocol TUConversationProviderManagerDataSource;

@interface TUConversationProviderManager : NSObject

@property (readonly, nonatomic) id<TUConversationProviderManagerDataSource> dataSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)registerConversationProviderForConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)conversationProviderForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)doesHandle:(id)a0 correspondToConversationProvider:(id)a1 completionHandler:(id /* block */)a2;
- (void)generatePseudonymHandleForConversationProvider:(id)a0 expiryDuration:(double)a1 URI:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerForCallbacksForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)renewPseudonymHandle:(id)a0 forConversationProvider:(id)a1 expirationDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)revokePseudonymHandle:(id)a0 forConversationProvider:(id)a1 completionHandler:(id /* block */)a2;

@end
