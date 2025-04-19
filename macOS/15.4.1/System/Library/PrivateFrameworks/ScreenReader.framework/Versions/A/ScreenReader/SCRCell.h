@class NSString;

@interface SCRCell : SCRMapElement <SCRCellElementProtocol> {
    NSString *_lastFocusedAXIdentifier;
}

@property (readonly, nonatomic) struct SCRDataCell { unsigned long long x0; unsigned long long x1; } cellCoordinates;
@property (nonatomic) BOOL hasCoordinatesInfoWithoutContentDescription;
@property (readonly, nonatomic) BOOL shouldOutputCoordinatesInfo;

- (void).cxx_destruct;
- (id)typeDescription;
- (unsigned long long)columnIndex;
- (unsigned long long)rowIndex;
- (id)valueDescription;
- (id)statusDescription;
- (id)helpDescription;
- (BOOL)isInteractive;
- (BOOL)openContextualMenu;
- (id)spanInfo;
- (id)defaultActionName;
- (id)onlyChild;
- (id)coordinatesInfo;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (void)_layoutChanged:(id)a0;
- (BOOL)alwaysAllowDrag;
- (unsigned long long)columnSpanCount;
- (id)dragDescription;
- (void)_addCoordinatesInfoToRequest:(id)a0;
- (id)_cellChildrenAttributedValueDescriptionsIncludingCaption:(BOOL)a0 updatingMutableVariants:(id)a1;
- (id)_coordinatesInfoForOutput;
- (BOOL)_hasFocusOnSingleChild;
- (BOOL)_isPromotable;
- (BOOL)_shouldAlwaysDescribeContentSummary;
- (void)addAdditionalElementSummaryToRequest:(id)a0;
- (void)addCellLabelToRequest:(id)a0;
- (void)addEmptyStatusToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addRowDescriptionToRequest:(id)a0 includedHeader:(BOOL)a1 includeBlanks:(BOOL)a2;
- (BOOL)allowFocusThroughSingleChild;
- (id)attributedValueDescription;
- (BOOL)canNavigateToChildren;
- (id)cellChildrenValueDescriptionsIncludingCaption:(BOOL)a0 updatingMutableVariants:(id)a1;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (id)columnHeaderDescription;
- (id)descriptionForNonTitleContentElement:(id)a0;
- (long long)groupBehavior;
- (BOOL)includeChildrenActions;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)isContainerElement;
- (id)lastFocusedAXIdentifier;
- (id)linkedUIElementsAllowFallback:(BOOL)a0;
- (id)parentTable;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (void)performScrollToVisibleRequest;
- (BOOL)preferChildLabelForValueDescription;
- (id)reorderedChildrenForSummaryDescription:(id)a0;
- (id)rowHeaderDescription;
- (unsigned long long)rowSpanCount;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)shouldAllowAutoFocusInto;
- (BOOL)shouldInterceptUpShiftEvent;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)supportsScrollToVisible;
- (id)textRepresentation;
- (id)titleDescription;
- (id)valueDescriptionUpdatingMutableVariants:(id)a0;

@end
