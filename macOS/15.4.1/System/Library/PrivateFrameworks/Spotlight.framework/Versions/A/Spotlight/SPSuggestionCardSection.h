@class SFSearchResult_SpotlightExtras;

@interface SPSuggestionCardSection : SFSuggestionCardSection

@property BOOL topHit;
@property (weak, nonatomic) SFSearchResult_SpotlightExtras *result;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
