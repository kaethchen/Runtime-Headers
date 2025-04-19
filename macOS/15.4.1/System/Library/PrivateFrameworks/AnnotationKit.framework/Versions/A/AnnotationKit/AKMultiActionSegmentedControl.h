@class NSMapTable;

@interface AKMultiActionSegmentedControl : NSSegmentedControl {
    NSMapTable *_segmentToActionMap;
}

+ (Class)cellClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (SEL)actionForSegment:(long long)a0;
- (void)setAction:(SEL)a0 forSegment:(long long)a1;

@end
