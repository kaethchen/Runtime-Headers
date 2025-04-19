@class NSArray, NSString, EKAutocompleteSearchResult, NSObject;
@protocol OS_dispatch_queue, EKAutocompletePendingSearchProtocol;

@interface EKEventSuggestionGenerator : NSObject

@property (retain) id<EKAutocompletePendingSearchProtocol> runningTitleSearch;
@property (retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain) NSArray *lastResults;
@property (retain) NSString *lastQueryString;
@property (retain) EKAutocompleteSearchResult *lastDefaultResult;
@property BOOL finishedCompletionHandlerCalled;
@property (retain) EKAutocompleteSearchResult *lastDefaultReminderResult;

+ (void)adjustTimeForUIAndApplyToAutocompleteResults:(id)a0 usingCurrentStartDate:(id)a1 currentEndDate:(id)a2 timeImplicitlySet:(BOOL)a3 calendar:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (void)_generateEventSuggestionsAsynchronouslyFromString:(id)a0 defaultSuggestionVisibility:(unsigned long long)a1 options:(unsigned long long)a2 defaultCalendar:(id)a3 referenceDate:(id)a4 initialEvent:(id)a5 pasteboardItemProvider:(id)a6 handler:(id /* block */)a7;
- (void)eventSuggestionsFromString:(id)a0 defaultCalendar:(id)a1 referenceDate:(id)a2 pasteboardItemProvider:(id)a3 defaultSuggestionVisibility:(unsigned long long)a4 options:(unsigned long long)a5 handler:(id /* block */)a6;
- (void)eventSuggestionsFromString:(id)a0 initialEvent:(id)a1 defaultSuggestionVisibility:(unsigned long long)a2 options:(unsigned long long)a3 handler:(id /* block */)a4;

@end
