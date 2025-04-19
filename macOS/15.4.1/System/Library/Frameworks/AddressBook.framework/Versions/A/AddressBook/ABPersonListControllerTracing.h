@interface ABPersonListControllerTracing : NSObject

+ (BOOL)shouldShowSiriSuggestions;
+ (id)suggestionLoggingForService;
+ (void)traceDidSelectSuggestion:(BOOL)a0 suggestedRecordId:(id)a1 contactId:(id)a2;
+ (void)traceSearchDidComplete:(BOOL)a0;

@end
