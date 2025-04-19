@class NSXPCConnection;

@interface LNSuggestionsProvider : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)suggestedActionsForSuggestionsRequests:(id)a0 error:(id *)a1;

@end
