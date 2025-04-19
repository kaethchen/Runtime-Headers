@class NSString;

@interface PXStandaloneWindowController : NSWindowController <NSWindowDelegate>

@property (retain, nonatomic) id retainedSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowWillClose:(id)a0;
- (id)initWithContentViewController:(id)a0;
- (id)initWithContentViewController:(id)a0 defaultSize:(struct CGSize { double x0; double x1; })a1;

@end
