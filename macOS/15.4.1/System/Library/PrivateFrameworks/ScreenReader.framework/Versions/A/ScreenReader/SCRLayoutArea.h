@class NSString, SCRCTargetSelectorTimer, NSArray;

@interface SCRLayoutArea : SCRMapElement {
    struct { unsigned char registeredSelectedChildrenMovedNotification : 1; } _srlFlags;
    SCRCTargetSelectorTimer *_echoDelayTimer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectedChildrenBounds;
    struct CGPoint { double x; double y; } _lastEchoedSelectedChildrenOrigin;
    NSArray *_previousSelectionUIElements;
}

@property (retain, nonatomic) NSString *lastPositionDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)measurementUnit;
- (id)_echoDelayTimer;
- (void)setPreviousSelectionUIElements:(id)a0;
- (id)descriptionForSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (void)_echoDescriptionForPositionChange:(id)a0;
- (void)_echoSelectedChildrenPositionChangeSummary;
- (id)_offsetDescriptionForOrigin:(struct CGPoint { double x0; double x1; })a0 lastOrigin:(struct CGPoint { double x0; double x1; })a1;
- (id)_offsetDescriptionForOrigin:(struct CGPoint { double x0; double x1; })a0 lastOrigin:(struct CGPoint { double x0; double x1; })a1 verticalUnitDescription:(id)a2 horizontalUnitDescription:(id)a3;
- (void)_selectedChildrenMoved:(id)a0;
- (id)_selectedLayoutItems;
- (id)_valueDescriptionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)addPositionDescriptionForElement:(id)a0 toRequest:(id)a1;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)containsMultipleFormatUnit;
- (id)descriptionForScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)descriptionForSizeOffset:(double)a0 forWidth:(BOOL)a1;
- (void)dispatchLayoutUpdate;
- (void)echoCurrentSelectionWithQueueID:(id)a0 interruptsRequests:(BOOL)a1 excludingIdentifiers:(id)a2;
- (void)handleSelectionChange:(id)a0;
- (id)horizontalUnitDescription;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)isContainerElement;
- (BOOL)isSectionView;
- (id)previousSelectionUIElements;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)setSelectedChildrenBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportsTransformedPointForPoint;
- (BOOL)supportsTransformedSizeForSize;
- (struct CGPoint { double x0; double x1; })transformedPointForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })transformedSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)verticalUnitDescription;

@end
