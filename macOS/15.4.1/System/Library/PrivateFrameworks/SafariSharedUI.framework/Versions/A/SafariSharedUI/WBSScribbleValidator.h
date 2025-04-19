@class NSArray, NSMapTable, WKWebView, NSMutableArray;

@interface WBSScribbleValidator : NSObject {
    WKWebView *_webView;
    NSArray *_elementsToValidate;
    NSArray *_targetsToExclude;
    NSMutableArray *_targetingResults;
    NSMutableArray *_targetsToHideUsingPaintAvoidance;
    NSMutableArray *_targetsToHideUsingDisplayNone;
    NSMutableArray *_targetsToReveal;
    NSMutableArray *_similarTargetsAndElements;
    NSMapTable *_targetToScribbleElementWithMatchingSelectorsMap;
    id /* block */ _completionBlock;
}

@property (readonly, nonatomic) NSArray *targetsToHideUsingDisplayNone;
@property (readonly, nonatomic) NSArray *targetsToHideUsingPaintAvoidance;
@property (readonly, nonatomic) NSArray *targetsToReveal;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_addSimilarTargets:(id)a0 element:(id)a1;
- (void)_collectSimilarTargetsWithCompletion:(id /* block */)a0;
- (void)_compareRenderedTextWithCompletion:(id /* block */)a0;
- (void)_findTargetsUsingHitTest:(id)a0 completion:(id /* block */)a1;
- (void)_findTargetsUsingSelectors:(id)a0 completion:(id /* block */)a1;
- (void)_findTargetsUsingTextSearch:(id)a0 completion:(id /* block */)a1;
- (void)_invokeCompletionBlock;
- (void)_removeHiddenResultsAndAddInFlowElements;
- (void)_removeHiddenResultsWithSimilarURLs;
- (void)_removeResultsWithDifferentGeometryAndRevealTargetsIfNeeded;
- (void)_removeTargetsToRevealIfNeeded;
- (void)_startValidation;
- (void)forEachSimilarTargetedElement:(id /* block */)a0;
- (id)initWithWebView:(id)a0 elements:(id)a1 excludedTargets:(id)a2 completion:(id /* block */)a3;

@end
