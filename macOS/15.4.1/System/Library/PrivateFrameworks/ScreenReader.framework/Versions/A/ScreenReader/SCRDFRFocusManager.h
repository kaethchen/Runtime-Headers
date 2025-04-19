@class NSString, NSArray, SCRElement, NSObservation, NSDate, SCRApplicationManager, NSObject;
@protocol OS_dispatch_queue, AXETimer, NSObserver, NSObject, NSObservable;

@interface SCRDFRFocusManager : NSObject <SCRObserverTarget>

@property (retain, nonatomic) SCRElement *focusedElement;
@property (retain, nonatomic) NSArray *orderedNavigableElements;
@property (retain, nonatomic) NSDate *lastFocusTimestamp;
@property (readonly, nonatomic) SCRApplicationManager *_applicationManager;
@property (retain, nonatomic) NSArray *_functionRows;
@property (nonatomic) BOOL _needToRefreshFunctionRows;
@property (retain, nonatomic) SCRElement *_functionRowInFocusChain;
@property (retain, nonatomic) id<AXETimer> _focusValidationTimer;
@property (retain, nonatomic) NSObservation<NSObservable, NSObserver> *_focusedApplicationObservation;
@property (retain, nonatomic) id<NSObject> _remoteUIElementsChangedObservation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_dfrFocusManagerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_applicationFunctionRowElementFromRemoteUIElement:(id)a0;
+ (BOOL)_isAllowedToDrillIntoElement:(id)a0;
+ (BOOL)_isAllowedToFocusOntoElement:(id)a0;
+ (BOOL)_isValidDFRElementToFocusOnto:(id)a0;
+ (id)validatedChildrenToFocusIntoForElement:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearFocus;
- (void)_handleValueChanged:(id)a0;
- (id)_adjacentElementInElements:(id)a0 relativeToIndex:(unsigned long long)a1 searchingForward:(BOOL)a2;
- (id)_appThread_adjacentLeafElementTo:(id)a0 movingForward:(BOOL)a1;
- (id)_appThread_deepestDescendantOfFunctionRowElement:(id)a0 containingPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_appThread_deepestFocusableDescendantOfElement:(id)a0 leadingEdge:(BOOL)a1;
- (BOOL)_focusOntoElement:(id)a0 containedInsideFunctionRow:(id)a1;
- (void)_handleAnnouncementRequested:(id)a0;
- (void)_handleFocusValidationTimerFired;
- (void)_handleFocusedElementParentLayoutChanged:(id)a0;
- (void)_handleTitleChanged:(id)a0;
- (void)_handleUIElementDestroyed:(id)a0;
- (BOOL)_moveFocusToAdjacentElementSearchingForward:(BOOL)a0;
- (void)_refreshFunctionRows;
- (void)_refreshOrderedNavigableElements;
- (void)_validateCurrentFocusChain;
- (void)_validateFocus;
- (BOOL)canActAsObserverTarget;
- (BOOL)focusOntoElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithApplicationManager:(id)a0;
- (BOOL)moveFocusToElement:(id)a0;
- (BOOL)moveFocusToNextElement;
- (BOOL)moveFocusToPreviousElement;
- (void)scheduleFocusValidation;
- (void)setFocusedApplication:(id)a0;

@end
