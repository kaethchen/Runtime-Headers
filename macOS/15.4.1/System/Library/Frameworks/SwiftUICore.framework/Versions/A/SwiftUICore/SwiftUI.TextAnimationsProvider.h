@interface SwiftUI.TextAnimationsProvider : NSObject <NSTextAnimationProvider>

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawStaticString:(id)a0 withAttributes:(id)a1 options:(unsigned long long)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 withPadding:(double)a4 forceClipping:(BOOL)a5 cgContext:(struct CGContext { } *)a6 stringDrawingContext:(id)a7;
+ (id)animationWithName:(id)a0;
+ (id)animationNamesForDomain:(id)a0;
+ (id)animationRenderer;
+ (id)animationWithName:(id)a0 localeIdentifier:(id)a1;

- (id)init;

@end
