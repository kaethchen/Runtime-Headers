@class NSLock;

@interface IFXDiskSelectView : NSMatrix {
    long long _actualItems;
    id _previousCell;
    int _targetViewAppearance;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFrame;
    NSLock *_KVODestructionLock;
    SEL _comparisonSelector;
}

@property int targetViewAppearance;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeAllItems;
- (void)awakeFromNib;
- (BOOL)canBecomeKeyView;
- (void)deselectAllCells;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)viewDidMoveToWindow;
- (void)viewFrameDidChange:(id)a0;
- (id)_addNewCell;
- (void)_redoLayout;
- (void)_redoLayoutOnMainThread;
- (void)addItemWithObject:(id)a0;
- (id)cellForTarget:(id)a0;
- (void)removeItemWithObject:(id)a0;
- (void)scrollToFirstAvailableTarget;
- (void)setComparisonSelector:(SEL)a0;

@end
