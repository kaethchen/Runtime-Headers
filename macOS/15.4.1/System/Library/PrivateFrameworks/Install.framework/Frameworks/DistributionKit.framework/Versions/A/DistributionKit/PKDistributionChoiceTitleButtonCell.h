@class PKDistributionChoiceItem;

@interface PKDistributionChoiceTitleButtonCell : NSButtonCell {
    PKDistributionChoiceItem *_item;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)state;
- (void)setState:(long long)a0;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;

@end
