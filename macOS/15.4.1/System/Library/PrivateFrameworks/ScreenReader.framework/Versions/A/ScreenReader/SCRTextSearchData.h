@class NSString;

@interface SCRTextSearchData : SCRSearchData

@property (readonly, nonatomic) NSString *searchText;

+ (id /* block */)_textPredicate;

- (void).cxx_destruct;
- (BOOL)_doesMarkerContainSearchText:(id)a0 searchPosition:(long long)a1;
- (id)defaultRemoteSearchOnElement:(id)a0;
- (id)initWithStartElement:(id)a0 direction:(long long)a1 request:(id)a2 searchText:(id)a3;
- (BOOL)resultWebTextField:(id)a0 doesMatchSearchCriteriaInMarker:(id)a1;
- (BOOL)shouldUseCustomRemoteSearch;
- (BOOL)shouldUseiOSSearch;

@end
