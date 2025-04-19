@class NSArray, NSMutableDictionary, NSString;

@interface CNAutocompleteResultWindow : CNAutocompleteResultWindowBase <CNAutocompleteResultTableViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *prefixToResults;
@property (retain, nonatomic) NSMutableDictionary *primaryResults;
@property (retain, nonatomic) NSMutableDictionary *suggestedResults;
@property (copy, nonatomic) NSArray *autocompleteResults;
@property (nonatomic) BOOL onlyEmailFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (BOOL)sourceTypeIsConsideredASuggestion:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didClickTableColumn:(id)a1;
- (id)displayStringForResult:(id)a0;
- (id)resultForString:(id)a0;
- (BOOL)selectAutocompleteResultForString:(id)a0;
- (id)viewForResult:(id)a0;
- (void)removeDisplayedResultsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)includeAddressForPrefixMatching;
- (id)emptyResultViewWithColor:(id)a0 andImage:(id)a1;
- (void)logDiagnosticForRow:(long long)a0;
- (void)notifyDelegateOfDisplayedResult:(id)a0 forRow:(long long)a1;
- (void)refreshViewForResult:(id)a0;
- (id)resultsAsPrefixStringMatches;
- (void)setAutocompleteResults:(id)a0 forFetchRequest:(id)a1;
- (id)viewForResult:(id)a0 withColor:(id)a1;
- (id)viewForResult:(id)a0 withColor:(id)a1 andImage:(id)a2;
- (id)viewForRow:(long long)a0;

@end
