@class NSView, QCPatch;

@interface QCInspector : NSObject {
    NSView *view;
    QCPatch *_patch;
    struct CGSize { double width; double height; } _minSize;
    void *_unused2[2];
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)viewNibName;

- (void)dealloc;
- (id)view;
- (id)viewTitle;
- (void)didLoadNib;
- (id)initWithBundle:(id)a0 nibName:(id)a1;
- (id)patch;
- (void)resetView;
- (void)setupViewForPatch:(id)a0;

@end
