@class IKImageBrowserSubsetLayoutManager, NSColor, NSMutableDictionary;

@interface IKImageBrowserGridGroup : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeToParent;
    struct _NSRange { unsigned long long location; unsigned long long length; } _transformedRange;
    BOOL _expanded;
    int _ghostCellCountOnTheLeft;
    int _ghostCellCountOnTheRight;
    int _groupStyle;
    NSColor *_bgColor;
    id _title;
    id _headLayer;
    id _tailLayer;
    BOOL _selected;
    BOOL _highlighted;
    BOOL _isAnimating;
    float _alpha;
    NSMutableDictionary *_attributes;
}

@property IKImageBrowserSubsetLayoutManager *grid;
@property (retain) id sourceAttributes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setTitle:(id)a0;
- (int)style;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setStyle:(int)a0;
- (id)title;
- (void)setHighlighted:(BOOL)a0;
- (float)alpha;
- (BOOL)animating;
- (BOOL)expanded;
- (BOOL)highlighted;
- (BOOL)selected;
- (void)setAlpha:(float)a0;
- (void)setAnimating:(BOOL)a0;
- (void)setExpanded:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)bgColor;
- (void)setBgColor:(id)a0;
- (BOOL)hasHeader;
- (id)collapsedIndexesWithColumnCount:(unsigned long long)a0;
- (BOOL)drawBezelOnDragOver;
- (int)ghostCellCountOnTheLeft;
- (int)ghostCellCountOnTheRight;
- (BOOL)hasCoverflow;
- (BOOL)hasFloatingHeader;
- (BOOL)hasSubLayout;
- (BOOL)hasSubLayoutWhenCollapsed;
- (id)headLayer;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeToParent;
- (void)setGhostCellCountOnTheLeft:(int)a0;
- (void)setGhostCellCountOnTheRight:(int)a0;
- (void)setHeadLayer:(id)a0;
- (void)setRangeToParent:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setTailLayer:(id)a0;
- (void)setTransformedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)supportsHorizontalScrolling;
- (id)tailLayer;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transformedRange;

@end
