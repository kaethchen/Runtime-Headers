@class NSString, ATXProactiveSuggestionClientModel;

@interface ATXProactiveCardSuggestionClient : NSObject {
    ATXProactiveSuggestionClientModel *_clientModel;
    NSString *_sourceId;
}

- (void).cxx_destruct;
- (void)clearSuggestions;
- (void)retrieveCurrentSuggestionsWithReply:(id /* block */)a0;
- (void)updateSuggestions:(id)a0;
- (void)updateSuggestions:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearSuggestionsWithCompletionHandler:(id /* block */)a0;
- (id)createSuggestionWithAppBundleIdentifier:(id)a0 widgetBundleIdentifier:(id)a1 widgetKind:(id)a2 criterion:(id)a3 applicableLayouts:(unsigned long long)a4 suggestionIdentifier:(id)a5 startDate:(id)a6 endDate:(id)a7 intent:(id)a8 metadata:(id)a9;
- (id)initWithSourceId:(id)a0;

@end
