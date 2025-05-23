@class NSString, TPPaginatedPageController, NSMapTable;

@interface TPTextFlowLayoutController : NSObject <TSWPLayoutOwner, TSKChangeSourceObserver> {
    TPPaginatedPageController *_pageController;
    NSMapTable *_layoutMgrs;
    NSMapTable *_flows;
    BOOL _tornDown;
}

@property (readonly, nonatomic) BOOL caresAboutStorageChanges;
@property (readonly, nonatomic) BOOL layoutIsStatic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)teardown;
- (id)initWithPageController:(id)a0;
- (id)textWrapper;
- (void)layoutManager:(id)a0 didClearDirtyRangeWithDelta:(long long)a1 afterCharIndex:(unsigned long long)a2;
- (void)layoutManagerNeedsLayout:(id)a0;
- (void)processWidowAndInflationOnPage:(id)a0;
- (void)deflatePage:(id)a0 intoHints:(inout id)a1 topicNumberHints:(inout id)a2;
- (void)didLayoutChangingDirtyRanges;
- (id)hintForFlow:(id)a0 pageIndex:(unsigned long long)a1;
- (void)i_trimFlow:(id)a0 pageIndex:(unsigned long long)a1 toCharIndex:(unsigned long long)a2;
- (void)invalidateFlows:(id)a0 startingPage:(id)a1;
- (void)layOutFlowsIfNeededOnPage:(id)a0;
- (id)p_flowForLayoutMgr:(id)a0;
- (id)p_flowsOnPage:(id)a0 textBoxes:(inout id)a1;
- (id)p_flowsOnPageIndex:(unsigned long long)a0;
- (id)p_layoutMgrForFlow:(id)a0;
- (id)p_orderedTextBoxesForFlow:(id)a0 textBoxes:(id)a1;
- (id)p_previousTextBoxForTarget:(id)a0;
- (void)p_setLayoutMgr:(id)a0 forFlow:(id)a1;
- (unsigned long long)pageIndexNeedingLayoutPreviousToPageIndex:(unsigned long long)a0;
- (id)previousTargetLastColumnForTarget:(id)a0;

@end
