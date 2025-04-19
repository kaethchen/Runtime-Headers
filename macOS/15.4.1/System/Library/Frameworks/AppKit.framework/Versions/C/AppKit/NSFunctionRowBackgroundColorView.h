@class NSString, NSColor;

@interface NSFunctionRowBackgroundColorView : NSView <NSCollectionViewElement> {
    NSColor *_backgroundColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (copy) NSColor *backgroundColor;
@property BOOL ignoresTouchEvents;

+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (Class)_animatorClass;
- (void)_systemColorsDidChange:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;

@end
