@class NSString, SCRLayoutArea, SCRElement;

@interface SCRLayoutItem : SCRMapElement {
    SCRLayoutArea *_container;
    SCRElement *_child;
    BOOL _hasMultipleNonHandleChildren;
}

@property (retain, nonatomic) NSString *lastSizeDescription;

- (void).cxx_destruct;
- (id)valueDescription;
- (id)statusDescription;
- (id)valueAsString;
- (BOOL)isInteractive;
- (BOOL)alwaysAllowDrag;
- (id)descriptionForSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (id)_child;
- (void)_moveVOFocusToChild:(id)a0;
- (BOOL)_shouldMorphWithSingleChild;
- (void)addAdditionalElementSummaryToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (BOOL)allowBuildChildren;
- (BOOL)allowFocusThroughSingleChild;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (id)containerIncludingScrollAreas:(BOOL)a0;
- (void)describePositionChangeFromPosition:(id)a0;
- (id)descriptionForSizeOffset:(double)a0 forWidth:(BOOL)a1;
- (void)echoSizeChangeForScale:(long long)a0 width:(BOOL)a1 request:(id)a2;
- (BOOL)enableRepositionModeWithRequest:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enclosingBoundsIncludesScrollArea:(BOOL)a0;
- (id)firstChildForFocusing;
- (BOOL)ignoreDragNotifications;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isContainerElement;
- (BOOL)isPartOfSelection;
- (id)overlappingSiblings;
- (id)parentLayoutArea;
- (id)resizeHandleUIElements;
- (BOOL)showResizeOptionsMenuWithRequest:(id)a0;
- (id)titleDescription;

@end
