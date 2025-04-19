@class EMIMDFREmojiListMatrixView;

@interface CPKEmojiIMAccessibleElement : NSAccessibilityElement

@property unsigned long long index;
@property EMIMDFREmojiListMatrixView *listView;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)initWithIndex:(unsigned long long)a0 listView:(id)a1;

@end
