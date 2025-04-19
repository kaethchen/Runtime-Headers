@class CAToolTipEditTextField;

@interface CAToolTipParameterStrip : NSView {
    CAToolTipEditTextField *labelField;
    CAToolTipEditTextField *valueField;
}

@property float labelWidth;
@property (readonly) unsigned int parameter;
@property (readonly) float value;

- (void)dealloc;
- (void)setLabel:(id)a0;
- (void)setValue:(float)a0;
- (void)createLabel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parameter:(unsigned int)a1 label:(id)a2 minValue:(float)a3 maxValue:(float)a4 unitLabel:(id)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parameter:(unsigned int)a1 label:(id)a2 minValue:(float)a3 maxValue:(float)a4 unitLabel:(id)a5 editable:(BOOL)a6;

@end
