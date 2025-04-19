@class NSViewController;

@interface AXSUIProxyViewController : NSViewController

@property (retain, nonatomic) NSViewController *wrapped;

- (id)init;
- (void).cxx_destruct;
- (id)makeController;

@end
