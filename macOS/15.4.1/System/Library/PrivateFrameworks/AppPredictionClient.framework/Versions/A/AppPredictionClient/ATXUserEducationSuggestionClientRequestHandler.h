@class ATXUserEducationSuggestionClient;

@interface ATXUserEducationSuggestionClientRequestHandler : NSObject <ATXUserEducationSuggestionClientXPCInterface> {
    ATXUserEducationSuggestionClient *_client;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (void)didReceiveUserEducationSuggestionEvent:(id)a0;

@end
