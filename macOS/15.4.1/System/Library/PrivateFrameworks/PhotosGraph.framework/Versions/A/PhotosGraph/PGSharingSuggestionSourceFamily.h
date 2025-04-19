@interface PGSharingSuggestionSourceFamily : PGSharingSuggestionGraphBasedSource

- (id)name;
- (double)weight;
- (id)details;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;

@end
