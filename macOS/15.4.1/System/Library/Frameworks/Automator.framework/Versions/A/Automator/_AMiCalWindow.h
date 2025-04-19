@class NSString, _AMiCalDocument, NSNumber;

@interface _AMiCalWindow : SBObject

@property (copy) NSString *name;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, copy) _AMiCalDocument *document;
@property (readonly) BOOL closeable;
@property (readonly) BOOL titled;
@property (copy) NSNumber *index;
@property (readonly) BOOL floating;
@property (readonly) BOOL miniaturizable;
@property BOOL miniaturized;
@property (readonly) BOOL modal;
@property (readonly) BOOL resizable;
@property BOOL visible;
@property (readonly) BOOL zoomable;
@property BOOL zoomed;

- (void)show;
- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (BOOL)exists;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
