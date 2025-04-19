@class NSCursor;

@interface NSCursorArea : NSTrackingArea {
    unsigned int _isOverrideCursor;
    long long _overrideType;
    NSCursor *_cursor;
}

@property (readonly) NSCursor *cursor;

- (void)dealloc;
- (void)_forceInternalMouseExitIfNeeded;
- (void)_clearOverrideIfNeeded;
- (void)_mouseEntered:(id)a0;
- (void)_mouseExited:(id)a0;
- (void)_sendMouseCancelledFromWindow:(id)a0;
- (id)initWithCursor:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithOverrideCursor:(id)a0 type:(long long)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
