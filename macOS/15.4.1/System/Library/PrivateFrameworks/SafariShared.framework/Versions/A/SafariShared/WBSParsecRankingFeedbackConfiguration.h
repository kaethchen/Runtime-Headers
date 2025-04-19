@class NSNumber, SFSearchResult;

@interface WBSParsecRankingFeedbackConfiguration : NSObject

@property (retain, nonatomic) SFSearchResult *hiddenSiriSuggestedSite;
@property (retain, nonatomic) NSNumber *prefixNavigationalIntent;
@property (nonatomic) BOOL serverCompletionDidMatchFirstSearchSuggestionFrom3rdParty;

- (void).cxx_destruct;

@end
