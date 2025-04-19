@class NSArray, NSPopUpButton;

@interface CAToolTipPopupMenuStrip : CAToolTipParameterStrip {
    NSPopUpButton *valuePopup;
    NSArray *buttonImages;
}

- (void)dealloc;
- (float)value;
- (void)setValue:(float)a0;
- (void)setLabelWidth:(float)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parameter:(unsigned int)a1 label:(id)a2 minValue:(float)a3 maxValue:(float)a4 valueStrings:(id)a5;
- (void)setImage:(id)a0 forValue:(float)a1;

@end
