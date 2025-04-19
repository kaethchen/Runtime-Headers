@class NSGridView;

@interface NSDebugTouchBarItemInspectorViewController : NSViewController {
    NSGridView *_gridView;
}

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)loadView;

@end
