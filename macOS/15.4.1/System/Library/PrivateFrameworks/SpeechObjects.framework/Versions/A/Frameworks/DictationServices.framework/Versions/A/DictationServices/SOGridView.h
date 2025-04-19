@class NSMutableArray;

@interface SOGridView : NSView {
    BOOL _drawBadges;
    BOOL _drawBordered;
    struct CGPoint { double x; double y; } _screenOrigin;
}

@property unsigned long long minimumNumber;
@property unsigned long long maximumNumber;
@property (retain) NSMutableArray *labeledElementsForElementViews;
@property (retain) NSMutableArray *elementViews;
@property (readonly) NSMutableArray *labeledElements;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)containsNumber:(unsigned long long)a0;
- (void)_initializeGridViewWithRows:(unsigned long long)a0 columns:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startingNumber:(unsigned long long)a1 drawBadges:(BOOL)a2 borderedChiclet:(BOOL)a3 rows:(unsigned long long)a4 columns:(unsigned long long)a5 screenOrigin:(struct CGPoint { double x0; double x1; })a6;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startingNumber:(unsigned long long)a1 screenOrigin:(struct CGPoint { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForNumber:(unsigned long long)a0;

@end
