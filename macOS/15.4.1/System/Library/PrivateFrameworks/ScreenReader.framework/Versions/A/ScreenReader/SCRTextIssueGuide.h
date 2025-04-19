@class SCRGuideItem, SCRTextCheckerEngine;

@interface SCRTextIssueGuide : SCRGuide

@property (nonatomic) unsigned long long firstItemIndex;
@property (retain, nonatomic) SCRGuideItem *_loadingGuideItem;
@property (nonatomic) unsigned long long issueCount;
@property (readonly, nonatomic) unsigned long long kind;
@property (readonly, nonatomic) SCRTextCheckerEngine *engine;

+ (id)_localizedTitleForIssueKind:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)close;
- (void)_addDescriptionToOutputRequest:(id)a0;
- (void)addBrailleDescriptionToRequest:(id)a0;
- (void)_addDescriptionToOutputRequest:(id)a0 withBraille:(BOOL)a1;
- (void)addTextCheckerSearchResult:(id)a0;
- (BOOL)handleItemSelection:(id)a0 outputRequest:(id)a1;
- (id)initWithIssueKind:(unsigned long long)a0 menuWindow:(id)a1 cursor:(id)a2 textChecker:(id)a3;
- (void)removeLoadingGuideItem;

@end
