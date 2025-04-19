@class NSString, SFSearchResult, NSURL, NSArray;

@interface WBSBrowsingAssistantResult : NSObject

@property (readonly, copy, nonatomic) NSURL *pageURL;
@property (readonly, nonatomic) unsigned long long contentOptions;
@property (readonly, nonatomic) NSString *summaryText;
@property (readonly, nonatomic) NSString *disclaimerText;
@property (readonly, nonatomic) SFSearchResult *summaryResult;
@property (readonly, nonatomic) NSArray *entityResults;
@property (readonly, nonatomic) NSArray *allResults;
@property (nonatomic) BOOL tableOfContentsAvailable;
@property (readonly, copy, nonatomic) NSArray *tableOfContentsTitles;
@property (readonly, copy, nonatomic) NSArray *tableOfContentsPaths;
@property (readonly, copy, nonatomic) NSArray *tableOfContentsTrailingText;
@property (nonatomic) long long remoteContentState;
@property (readonly, nonatomic) BOOL remoteContentAvailableForFetching;
@property (readonly, nonatomic) BOOL remoteContentReady;

- (void).cxx_destruct;
- (void)_clearSummaryAndTableOfContents;
- (void)_clearAllRemoteContent;
- (id)_extractDisclaimerFromResult:(id)a0;
- (id)_extractSummaryFromResult:(id)a0;
- (void)_setUpTableOfContentsDataUsingResult:(id)a0;
- (void)_setUpWithContentOptions:(unsigned long long)a0;
- (void)_updateContentOptions:(unsigned long long)a0 inMask:(unsigned long long)a1;
- (id)initWithURL:(id)a0 contentOptions:(unsigned long long)a1;
- (void)updateForLocalContentWithOptions:(unsigned long long)a0;
- (void)updateForRemoteContentWithOptions:(unsigned long long)a0;
- (void)updateWithSearchResults:(id)a0;

@end
