@interface SCRAccessibilityInspectorApplication : SCRSystemApplication

@property (readonly, nonatomic) BOOL isAccessibilityInspectorApplication;

- (void)_setFrontMost;
- (void)dispatchSetFrontMost;
- (id)initWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0 pid:(int)a1 name:(id)a2 bundleIdentifier:(id)a3 bundleVersion:(id)a4 url:(id)a5;

@end
