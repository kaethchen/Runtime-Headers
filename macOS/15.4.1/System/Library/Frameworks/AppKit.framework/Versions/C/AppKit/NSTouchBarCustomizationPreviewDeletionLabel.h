@class NSString, CALayer, NSTextField;

@interface NSTouchBarCustomizationPreviewDeletionLabel : NSView <NSCollectionViewElement> {
    CALayer *_maskLayer;
    NSTextField *_labelField;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _labelTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (copy) NSString *label;
@property struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } labelTransform;

- (void)dealloc;
- (void)applyLayoutAttributes:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLayer:(id)a0;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
