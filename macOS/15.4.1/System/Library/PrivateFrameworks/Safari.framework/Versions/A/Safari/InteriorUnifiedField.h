@class UnifiedField;

@interface InteriorUnifiedField : NSTextField {
    UnifiedField *_unifiedField;
}

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (BOOL)isFlipped;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 unifiedField:(id)a1;

@end
