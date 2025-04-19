@class NSPointerArray;

@interface NSStatusBar : NSObject {
    NSPointerArray *_items;
    void *_fReserved1;
    long long _registeredForNote;
}

@property (class, readonly) NSStatusBar *systemStatusBar;

@property (readonly) double contentPadding;
@property (readonly) struct CGSize { double x0; double x1; } backgroundSelectionInset;
@property (readonly, getter=isVertical) BOOL vertical;
@property (readonly) double thickness;

+ (BOOL)_performKeyEquivalent:(id)a0;

- (void)dealloc;
- (id)init;
- (void)_setRegisteredForNotifications:(BOOL)a0;
- (void)enableLayoutChangeNotifications;
- (id)_createStatusItemControlInWindow:(id)a0;
- (void)_insertObjectInItemArray:(id)a0;
- (void)_insertStatusItem:(id)a0;
- (id)_name;
- (void)_navigationCtrlF8Pressed;
- (BOOL)_performKeyEquivalent:(id)a0;
- (void)_removeObjectFromItemArray:(id)a0;
- (void)_removeStatusItem:(id)a0;
- (void)_statusItemIsDeallocing:(id)a0;
- (id)_statusItemWithLength:(double)a0 systemInsertOrder:(long long)a1;
- (id)_statusItemWithLength:(double)a0 withPriority:(long long)a1;
- (id)_statusItems;
- (void)_updateItemsForMetrics:(id)a0;
- (long long)backgroundStyleForHighlight:(BOOL)a0;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inView:(id)a1 highlight:(BOOL)a2;
- (void)removeStatusItem:(id)a0;
- (void)resetLayout:(id)a0;
- (id)statusBarLayoutPreferringAppearance:(id)a0 resolution:(double)a1;
- (id)statusItemWithLength:(double)a0;

@end
