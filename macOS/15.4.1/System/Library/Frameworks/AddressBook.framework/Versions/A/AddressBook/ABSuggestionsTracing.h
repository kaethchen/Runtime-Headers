@interface ABSuggestionsTracing : NSObject

+ (id)suggestionLoggingForService;
+ (void)traceContactInformationSource:(id)a0 suggestionIdentifier:(id)a1 contactIdentifier:(id)a2;
+ (void)traceSuggestionAction:(id)a0 suggestionIdentifier:(id)a1 contactIdentifier:(id)a2;
+ (void)traceSuggestionInfoInteraction:(id)a0 suggestionIdentifier:(id)a1 contactIdentifier:(id)a2;
+ (void)traceSuggestionInteraction:(id)a0;

@end
