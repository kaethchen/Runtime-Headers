@protocol UnifiedFieldLayoutManagerDelegate;

@interface UnifiedFieldLayoutManager : NSLayoutManager

@property (weak, nonatomic) id<UnifiedFieldLayoutManagerDelegate> unifiedFieldDelegate;

- (void).cxx_destruct;
- (void)fillBackgroundRectArray:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(unsigned long long)a1 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 color:(id)a3;

@end
