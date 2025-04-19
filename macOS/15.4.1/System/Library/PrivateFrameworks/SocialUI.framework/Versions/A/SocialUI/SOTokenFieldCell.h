@class SOTokenFieldController;
@protocol SOTokenFieldCellDragDelegate;

@interface SOTokenFieldCell : NSTokenFieldCell {
    unsigned int _dragDelegateRespondsToTokenFieldCellDidBeginDragOperation;
    unsigned int _dragDelegateRespondsToTokenFieldCellDidEndDragOperation;
}

@property (weak) SOTokenFieldController *tokenFieldController;
@property (weak, nonatomic) id<SOTokenFieldCellDragDelegate> dragDelegate;

- (void).cxx_destruct;
- (void)_setPerformingDrop:(BOOL)a0;
- (id)accessibilityChildren;
- (id)setUpFieldEditorAttributes:(id)a0;
- (BOOL)tokenAttachment:(id)a0 doubleClickedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3;

@end
