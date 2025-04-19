@class NSString, SFSearchResult, WBSQuerySuggestion;

@interface CompletionListItemObjCAdapter : NSObject <WBSCompletionListItem>

@property (nonatomic) void *completionListItem;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (unsigned long long)_determineEngagementDestination;
- (id)_determineParsecDomainIdentifier;
- (id)_determineSFSearchResultValue;
- (BOOL)_isQuickWebsiteSearch;
- (id)initWithCompletionListItem:(void *)a0;

@end
