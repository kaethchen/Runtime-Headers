@class _AMSafariTab, NSString, _AMSafariDocument;

@interface _AMSafariWindow : _AMSafariItem

@property (copy) _AMSafariTab *currentTab;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) BOOL closeable;
@property (readonly, copy) _AMSafariDocument *document;
@property (readonly) BOOL floating;
@property long long index;
@property (readonly) BOOL miniaturizable;
@property BOOL miniaturized;
@property (readonly) BOOL modal;
@property (copy) NSString *name;
@property (readonly) BOOL resizable;
@property (readonly) BOOL titled;
@property BOOL visible;
@property (readonly) BOOL zoomable;
@property BOOL zoomed;

- (long long)id;
- (id)tabs;

@end
