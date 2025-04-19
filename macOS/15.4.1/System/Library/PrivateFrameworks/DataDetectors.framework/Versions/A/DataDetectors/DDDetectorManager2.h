@class NSString, NSMutableDictionary, DDThreadManager, NSMutableArray;
@protocol DDDetectorManager2Delegate;

@interface DDDetectorManager2 : NSObject <DDOperationDelegate, DDHighlightsDelegate, DDHighlightsDataSource> {
    struct __CFDictionary { } *_highlightsIdentifierForOverlay;
    NSMutableDictionary *_highlightsRequestsForIdentifier;
    struct __CFDictionary { } *_identifierForController;
    NSMutableDictionary *_scanRequestsForIdentifier;
    id<DDDetectorManager2Delegate> _delegate;
    DDThreadManager *_threadManager;
    NSMutableArray *_scanOperations;
}

@property id<DDDetectorManager2Delegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)displayUIForContext:(id)a0 additionalMenuItems:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)highlightsView:(id)a0 actionForEvent:(id)a1 onHighlightObject:(id)a2 proposedAction:(unsigned long long)a3;
- (id)highlightsViewHighlightObjects:(id)a0;
- (id)_highlightsOverlayForIdentifier:(id)a0;
- (id)_highligtsOverlayForController:(id)a0 highlightRequest:(id)a1;
- (void)_removeReferenceToHLOverlayForIdentifier:(id)a0;
- (id)actionContextForBasicView:(id)a0;
- (void)cancelDetectionForIdentifier:(id)a0;
- (void)clearResultsForController:(id)a0;
- (void)controllerWillGoAway:(id)a0;
- (void)controllerWithIdentifierDidAppear:(id)a0;
- (void)controllerWithIdentifierWillDisappear:(id)a0;
- (void)controllerWithIdentifierWillGoAway:(id)a0;
- (id)detectControllerContent:(id)a0 context:(id)a1;
- (void)externalUIIsOver;
- (void)externalUIStarted;
- (BOOL)highlightsView:(id)a0 blankAfterObject:(id)a1;
- (id)highlightsView:(id)a0 framesOfHighlightObject:(id)a1;
- (unsigned long long)highlightsView:(id)a0 highlightStyleForObject:(id)a1;
- (id)highlightsView:(id)a0 tooltipForObject:(id)a1;
- (void)layoutChangedForOverlay:(id)a0;
- (void)requestUIForClick:(BOOL)a0 highlightView:(id)a1 immediate:(BOOL)a2;
- (void)scanCompleted:(id)a0;

@end
