@class NSString, SFSearchResult, WBSQuerySuggestion;

@interface UnifiedFieldCompletionListItem : NSObject <WBSCompletionListItem> {
    NSString *_domainIdentifier;
    SFSearchResult *_sfSearchResult;
}

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

+ (id)itemForSearchEngineProvider:(id)a0 forQueryID:(long long)a1;

- (void).cxx_destruct;
- (id)_initWithDomainIdentifier:(id)a0 forQueryID:(long long)a1;

@end
