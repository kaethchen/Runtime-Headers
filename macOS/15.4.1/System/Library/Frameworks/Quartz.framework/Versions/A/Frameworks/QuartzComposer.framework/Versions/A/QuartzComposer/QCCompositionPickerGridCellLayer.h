@class QCCompositionCellLayer, QCPickerSelectionLayer, CATextLayer;

@interface QCCompositionPickerGridCellLayer : CALayer <CAAction> {
    QCCompositionCellLayer *_QCLayer;
    QCPickerSelectionLayer *_selectionLayer;
    CATextLayer *_textLayer;
    struct CGColor { } *_cellFocusRingColor;
    struct CGColor { } *_cellSelectedTextColor;
    struct CGColor { } *_cellTextColor;
    id _controller;
    BOOL _selected;
}

- (void)dealloc;
- (void)finalize;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (void)updateLayout;
- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (void)wakeup;
- (id)composition;
- (void)selectionDidChange;
- (id)initWithComposition:(id)a0 controller:(id)a1;
- (void)_finalize_QCCompositionPickerGridCellLayer;
- (void)animateCompositionsIfNeeded;
- (void)cellBackgroundColorDidChange;
- (id)compositionLayer;
- (void)restoreExpandedLayout;
- (void)selectionModeDidChange;
- (void)setCollapsedLayout;
- (void)sleep;

@end
