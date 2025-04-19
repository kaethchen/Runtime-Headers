@interface FI_TContextMenuItem : NSMenuItem

@property (nonatomic) BOOL showMeAnyway;

+ (id)itemWithTitle:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0 action:(SEL)a1;

- (void)setKeyEquivalent:(id)a0;

@end
