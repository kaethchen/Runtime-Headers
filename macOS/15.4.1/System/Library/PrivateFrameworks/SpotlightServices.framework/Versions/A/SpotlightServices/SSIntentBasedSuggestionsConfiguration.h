@interface SSIntentBasedSuggestionsConfiguration : NSObject

@property (nonatomic) BOOL showWebAsTypedSuggestion;
@property (nonatomic) int localSuggestionQuota;
@property (nonatomic) int serverSuggestionQuota;

@end
