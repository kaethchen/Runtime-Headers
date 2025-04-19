@class NSString, PXStoryViewModel, NSAccessibilityElement;

@interface PXStoryViewAccessibilityHUDContentProvider : NSObject <PXStoryDiagnosticHUDContentProvider> {
    PXStoryViewModel *_viewModel;
    BOOL _attached;
    BOOL _cachedStringNeedsUpdate;
    NSString *_cachedDisplayString;
    NSAccessibilityElement *_currentFocusedAccessibilityElement;
    NSAccessibilityElement *_previousFocusedAccessibilityElement;
}

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)_diagnosticText;
- (void)_appendDescriptionOfChildrenOf:(id)a0 to:(id)a1;
- (void)_attachToAccessibility;
- (id)_axGroupParentOfElement:(id)a0;
- (void)_elementDidUpdate:(id)a0;
- (id)_fullHudStringForElement:(id)a0;
- (id)_hudStringForElement:(id)a0 includeAddresses:(BOOL)a1 includeImportantDetails:(BOOL)a2 includeGeometry:(BOOL)a3 shortenInitialPrefix:(BOOL)a4;
- (BOOL)_isSafeToUpdateDebugString;
- (BOOL)_recur_checkGroupAndSubgroupsForNeedsVersionUpdate:(id)a0;
- (id)_shortRectString:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)attachToAccessibilityIfNeeded;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;

@end
