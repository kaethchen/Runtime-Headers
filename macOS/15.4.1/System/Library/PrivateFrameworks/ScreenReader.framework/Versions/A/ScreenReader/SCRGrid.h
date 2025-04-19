@interface SCRGrid : SCRList

@property (nonatomic) long long previousLineIndex;

- (unsigned long long)_columnCount;
- (unsigned long long)_rowCount;
- (void)updateOrientation;
- (BOOL)_moveDownWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveInDirection:(long long)a0 event:(id)a1 request:(id)a2 allowFullWrapping:(BOOL)a3;
- (BOOL)_moveLeftWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveRightWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveUpWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (void)addItemDescriptionToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (unsigned long long)directInteractionArrowCaptureMask;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setBrailleLineWithFocusedElement:(id)a0 forceRebuild:(BOOL)a1;
- (BOOL)shouldSynchVOCursorToSelectionChange;

@end
