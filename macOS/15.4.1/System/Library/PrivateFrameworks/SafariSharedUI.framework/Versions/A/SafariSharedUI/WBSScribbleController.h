@class NSTimer, NSString, WBSScribbleValidator, WBSUserDefinedContentBlocker, NSMutableDictionary, NSMutableArray, WBSScribbleElement, WBSScribbleQuirks, WKWebView;
@protocol WBSScribbleControllerDelegate;

@interface WBSScribbleController : NSObject <WBSUserDefinedContentBlockerManagerObserver> {
    WKWebView *_webView;
    BOOL _isGettingElementAtPoint;
    NSTimer *_validatingTimer;
    double _validatingDelay;
    BOOL _isUpdatingShouldMakePageScrollableAndInteractable;
    BOOL _shouldMakePageScrollableAndInteractable;
    BOOL _startedScribblingWithHiddenItems;
    unsigned long long _numberOfElementsHiddenByPaintingAvoidance;
    unsigned long long _numberOfHiddenElementsInheritedFromNormalBrowsing;
    WBSUserDefinedContentBlocker *_contentBlockerForCurrentHost;
    NSMutableArray *_scribbleElementsFromCurrentSession;
    NSMutableArray *_scribbleElementsForGlobalActionsFromCurrentSession;
    NSMutableArray *_targetedElementsHiddenFromCurrentSession;
    NSMutableArray *_targetedElementsHiddenByValidation;
    NSMutableArray *_targetedElementsToHideUsingDisplayNone;
    NSMutableDictionary *_activeGlobalActionsByDatabaseID;
    WBSScribbleQuirks *_quirksForCurrentSession;
    WBSScribbleValidator *_validator;
}

@property (weak, nonatomic) id<WBSScribbleControllerDelegate> delegate;
@property (readonly, nonatomic) WBSScribbleElement *selectedScribbleElement;
@property (readonly, nonatomic) BOOL hasPendingSelectionRequest;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } lastRequestLocation;
@property (readonly, nonatomic) BOOL isScribbling;
@property (readonly, nonatomic) BOOL canHideContentInWebView;
@property (readonly, nonatomic) unsigned long long numberOfChangesFromCurrentSession;
@property (readonly, nonatomic) unsigned long long numberOfAllHiddenElements;
@property (nonatomic) BOOL elementSelectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithWebView:(id)a0;
- (BOOL)_shouldSkipValidation;
- (id)cachedGlobalContentBlockerActions;
- (void)userDefinedContentBlockerManagerDidUpdateAllRules:(id)a0;
- (void)clearAllEdits;
- (void)endScribblingAndSaveChanges:(BOOL)a0;
- (void)getElementAtPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)getTapToRadarURLForScribbleIssueForWebView:(id)a0 category:(long long)a1 completionHandler:(id /* block */)a2;
- (void)hideSelectedElement;
- (void)loadContentBlockerForHost:(id)a0;
- (void)reloadWithoutScribbleElements;
- (void)startScribblingWithCompletionHandler:(id /* block */)a0;
- (void)startValidatingHiddenElements;
- (void)undoLastAction;
- (void)updateCountForElementsHiddenByPaintingAvoidance;
- (void)updateSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_applyQuirksToRequest:(id)a0;
- (void)_applyWebCompatibilityFixups;
- (id)_contentBlockingRulesAsString:(id)a0;
- (id)_currentUserContentControllers;
- (void)_disableHiddenActiveElementIfNeeded;
- (id)_elementsToValidate;
- (BOOL)_hasAnyHiddenElements;
- (void)_hideElementUsingPaintAvoidance:(id)a0 completion:(id /* block */)a1;
- (void)_makePageScrollableAndInteractableIfNeeded;
- (void)_rescheduleValidation;
- (void)_resetPaintAvoidanceForElements:(id)a0 completion:(id /* block */)a1;
- (void)_stopValidationTimer;
- (id)_tapToRadarDescriptionWithWebView:(id)a0 contentBlockingRules:(id)a1;
- (id)_targetsHiddenByUserOrValidation;
- (void)_updateQuirksIfNeeded;
- (void)_updateUserStyleSheet;
- (void)_validateHiddenElements:(id /* block */)a0;
- (void)deselectSelectedElement;

@end
