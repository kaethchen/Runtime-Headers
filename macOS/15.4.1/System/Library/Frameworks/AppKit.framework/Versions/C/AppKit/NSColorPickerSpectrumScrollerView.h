@protocol NSColorPickerSpectrumScrollerViewDelegate, NSColorPickerSpectrumScrollerViewDataSource;

@interface NSColorPickerSpectrumScrollerView : NSView {
    id<NSColorPickerSpectrumScrollerViewDelegate> _delegate;
    id<NSColorPickerSpectrumScrollerViewDataSource> _dataSource;
}

- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)_handleMouse:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)dataSource;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)setDataSource:(id)a0;

@end
