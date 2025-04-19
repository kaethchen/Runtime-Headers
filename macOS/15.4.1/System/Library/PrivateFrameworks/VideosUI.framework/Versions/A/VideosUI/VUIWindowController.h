@interface VUIWindowController : NSWindowController <TVLibraryWindowController, NSUserInterfaceValidations>

@property (readonly, nonatomic) BOOL isShowingLibraryView;

- (id)initWithWindow:(id)a0;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (void)goBack:(id)a0;
- (void)doSetFocusOnSearchField:(id)a0;

@end
