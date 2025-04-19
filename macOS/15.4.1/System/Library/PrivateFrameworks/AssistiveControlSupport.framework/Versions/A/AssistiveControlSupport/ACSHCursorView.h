@class NSMutableDictionary, NSMutableArray;

@interface ACSHCursorView : ACSHView {
    struct CGColor { } *_highlightColor1;
    struct CGColor { } *_highlightColor2;
    struct CGColor { } *_cursorColor1;
    struct CGColor { } *_cursorColor2;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalCursorScreenFrameInCarbonCoords;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cursorScreenFrameInCarbonCoords;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cursorDrawFrameInCarbonCoords;
    NSMutableDictionary *_allTabInfo;
    NSMutableArray *_orderedTabInfoKeys;
    int _positionForCurrentTabs;
}

@property (nonatomic) int cursorType;
@property (nonatomic) BOOL isContainerCursorView;
@property (nonatomic) double cursorRadius;
@property (nonatomic) double borderWidth;
@property (nonatomic) int preferredTabPosition;
@property (nonatomic) BOOL allowOffscreen;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)setHighlightColor:(struct CGColor { } *)a0;
- (void)setCursorColor:(struct CGColor { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewFrameForCursorTabPosition:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForTabBarAtCursorPosition:(int)a0;
- (void)_drawCursor;
- (void)_drawTab:(id)a0 atIndex:(unsigned long long)a1;
- (void)_drawTabs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForTabAtIndex:(unsigned long long)a0 cursorPosition:(int)a1;
- (struct CGSize { double x0; double x1; })_sizeToDrawAllTabsForPosition:(int)a0;
- (unsigned long long)_tabLayoutForPosition:(int)a0;
- (id)_tabPositionPreferenceOrder;
- (void)_updatePositionForCurrentTabs;
- (unsigned long long)_visibleTabCount;
- (void)addTabWithNormalImage:(id)a0 selectedImage:(id)a1 identifier:(unsigned long long)a2;
- (void)initView;
- (void)recalculateFrame;
- (void)setCursorFrameInCarbonCoords:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCursorGradientWithColor:(struct CGColor { } *)a0 color:(struct CGColor { } *)a1;
- (void)setHighlightGradientWithColor:(struct CGColor { } *)a0 color:(struct CGColor { } *)a1;
- (void)setIsAvailable:(BOOL)a0 forTabIdentifier:(unsigned long long)a1;
- (void)setSelectedTabIdentifier:(unsigned long long)a0;
- (double)tabIconSize;
- (void)updateCursorStyle;

@end
