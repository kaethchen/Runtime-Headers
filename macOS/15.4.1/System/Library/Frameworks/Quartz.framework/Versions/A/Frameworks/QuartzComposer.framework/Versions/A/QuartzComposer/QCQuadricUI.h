@class NSTextField;

@interface QCQuadricUI : QCInspector {
    NSTextField *slicesField;
    NSTextField *stacksField;
}

+ (id)viewNibName;

- (void)update:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
