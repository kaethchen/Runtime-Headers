@class LNActionMetadata, LNFocusConfigurationSuggestionContext, NSArray;

@interface LNFetchSuggestedFocusActionsConnectionOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) LNActionMetadata *actionMetadata;
@property (retain, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 actionMetadata:(id)a1 suggestionContext:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;

@end
