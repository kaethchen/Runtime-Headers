@class PKPassViewController;

@interface PKPassScrollView : NSScrollView

@property BOOL scrollEnabled;
@property BOOL disregardFurtherScrolling;
@property (readonly) BOOL inMomentumScrolling;
@property (retain) PKPassViewController *selectedViewController;

- (void).cxx_destruct;
- (void)scrollWheel:(id)a0;

@end
