@class SCRElementHashMarker, SCRElement, NSMutableSet, SCROutputRequest;

@interface SCRSearchData : NSObject

@property (retain, nonatomic) SCRElement *startElement;
@property (readonly, nonatomic) BOOL isSearchForward;
@property (nonatomic) BOOL searchDidWrap;
@property (retain, nonatomic) SCRElementHashMarker *wrapMarker;
@property (nonatomic) unsigned long long previousHeadingLevel;
@property (nonatomic) unsigned long long previousTableItemLevel;
@property (retain, nonatomic) NSMutableSet *sharedTextHashKeys;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } startRange;
@property (nonatomic) long long resultStatus;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } resultRange;
@property (readonly, nonatomic) SCRElement *originalElement;
@property (readonly, nonatomic) long long searchDirection;
@property (readonly, nonatomic) id /* block */ searchPredicate;
@property (retain, nonatomic) SCRElement *searchContainer;
@property (readonly, nonatomic) SCROutputRequest *resultRequest;
@property (retain, nonatomic) SCRElementHashMarker *resultMarker;
@property (nonatomic) BOOL handleResult;

- (void).cxx_destruct;
- (id)defaultRemoteSearchOnElement:(id)a0;
- (id)initWithStartElement:(id)a0 direction:(long long)a1 request:(id)a2 handleResult:(BOOL)a3 searchPredicate:(id /* block */)a4;
- (BOOL)isNonWebText;
- (BOOL)isPartOfPage;
- (BOOL)resultElement:(id)a0 doesMatchSearchCriteriaInMarker:(id)a1;
- (BOOL)resultWebTextField:(id)a0 doesMatchSearchCriteriaInMarker:(id)a1;
- (BOOL)shouldUseCustomRemoteSearch;
- (BOOL)shouldUseiOSSearch;
- (BOOL)validateSearchResultMarker:(id)a0;

@end
