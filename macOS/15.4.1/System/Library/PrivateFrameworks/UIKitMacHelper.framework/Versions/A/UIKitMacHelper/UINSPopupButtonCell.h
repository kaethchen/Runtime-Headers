@interface UINSPopupButtonCell : NSPopUpButtonCell

@property (nonatomic) unsigned long long alignmentEdge;

- (id)init;
- (void)_itemAdded:(id)a0;
- (BOOL)_positionsMenuRelativeToRightEdge;
- (void)setMenu:(id)a0;
- (BOOL)_isFirstItemHidden;
- (void)_setFirstItemHidden:(BOOL)a0;
- (void)presentMenu:(id)a0 attachedToView:(id)a1;

@end
