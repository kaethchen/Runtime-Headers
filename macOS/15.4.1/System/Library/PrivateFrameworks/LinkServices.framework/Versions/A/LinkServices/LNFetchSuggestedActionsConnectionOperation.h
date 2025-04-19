@class NSArray, NSString;

@interface LNFetchSuggestedActionsConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 siriLanguageCode:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
