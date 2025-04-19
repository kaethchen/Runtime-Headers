@class NSString, _AMAddressBookDocument;

@interface _AMAddressBookWindow : SBObject

@property (readonly, copy) NSString *name;
@property long long index;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) BOOL closeable;
@property (readonly) BOOL miniaturizable;
@property BOOL miniaturized;
@property (readonly) BOOL resizable;
@property BOOL visible;
@property (readonly) BOOL zoomable;
@property BOOL zoomed;
@property (readonly, copy) _AMAddressBookDocument *document;

- (void)delete;
- (void)moveTo:(id)a0;
- (long long)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
