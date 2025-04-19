@class NSString, NSArray;
@protocol UIRVPresenterHighlightDelegate;

@interface UINSRevealController : NSObject <UINSRevealController, RVPresenterHighlightDelegate> {
    NSArray *highlightRects;
}

@property (retain, nonatomic) id<UIRVPresenterHighlightDelegate> highlighter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRevealController;

- (void).cxx_destruct;
- (void)revealContext:(id)a0 drawRectsForItem:(id)a1;
- (id)revealContext:(id)a0 rectsForItem:(id)a1;
- (BOOL)revealContext:(id)a0 shouldUseDefaultHighlightForItem:(id)a1;
- (void)revealContext:(id)a0 startHighlightingItem:(id)a1;
- (void)revealContext:(id)a0 stopHighlightingItem:(id)a1;
- (id)_documentContextWithDictionary:(id)a0;
- (void)_generateHighlightRectsForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_prepareRevealSessionAtLocation:(struct CGPoint { double x0; double x1; })a0 window:(id)a1 highlighter:(id)a2;
- (id)_presenter;
- (id)_presentingContextAtLocation:(struct CGPoint { double x0; double x1; })a0 view:(id)a1;
- (BOOL)highlighting;
- (id)menuItemsWithItem:(id)a0 locationInWindow:(struct CGPoint { double x0; double x1; })a1 window:(id)a2 highlighter:(id)a3;
- (id)menuItemsWithItem:(id)a0 locationInWindow:(struct CGPoint { double x0; double x1; })a1 window:(id)a2 highlighter:(id)a3 contextDictionary:(id)a4;
- (id)quickActionDictionaryForMenuItem:(id)a0;
- (void)revealContext:(id)a0 completeHighlightingItem:(id)a1;
- (void)revealContext:(id)a0 highlightItem:(id)a1 withProgress:(double)a2;
- (void)revealContext:(id)a0 highlightRangeChangedForItem:(id)a1;
- (void)revealItem:(id)a0 locationInWindow:(struct CGPoint { double x0; double x1; })a1 window:(id)a2 highlighter:(id)a3;
- (void)revealItem:(id)a0 locationInWindow:(struct CGPoint { double x0; double x1; })a1 window:(id)a2 highlighter:(id)a3 contextDictionary:(id)a4;

@end
