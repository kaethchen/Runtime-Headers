@class SCRVisualsHighlightCursor, NSDictionary, NSString, SCRVisualsMenuWindow, SCRTextCheckerEngine;

@interface SCRTextCheckerCollectionGuide : SCRCollectionGuide <SCRCollectionGuideDelegateProtocol>

@property (retain, nonatomic) SCRTextCheckerEngine *engine;
@property (readonly, nonatomic) NSDictionary *_issueGuides;
@property (readonly, weak, nonatomic) SCRVisualsMenuWindow *_menuWindow;
@property (readonly, weak, nonatomic) SCRVisualsHighlightCursor *_cursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_addGuideInSortedPosition:(id)a0;
- (void)_prepareGuideForShowing:(id)a0;
- (void)_removeAllGuidesWithNoIssuesIncludingCurrent:(BOOL)a0;
- (unsigned long long)_rowsToShowForGuide:(id)a0;
- (void)collectionGuide:(id)a0 didHideGuide:(id)a1 atIndex:(unsigned long long)a2;
- (void)collectionGuide:(id)a0 willShowGuide:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithElement:(id)a0 menuWindow:(id)a1 cursor:(id)a2;
- (BOOL)showIssues;

@end
