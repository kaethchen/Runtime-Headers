@class NSTrackingArea, NSString, NSTextView;

@interface NSDataDetectionIndicatorView : _NSDrawingHandlerView {
    NSTrackingArea *_trackingArea;
    id _dataResult;
    NSString *_string;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSTextView *_textView;
}

- (void)dealloc;
- (void)_reset;
- (id)_highlightMenuItemsForEvent:(id)a0;
- (BOOL)_isSharing;
- (BOOL)_performContextualActionWithEvent:(id)a0;
- (BOOL)_performDirectActionWithEvent:(id)a0;
- (void)bindToTextView:(id)a0 forDataResult:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)copy:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseExited:(id)a0;

@end
