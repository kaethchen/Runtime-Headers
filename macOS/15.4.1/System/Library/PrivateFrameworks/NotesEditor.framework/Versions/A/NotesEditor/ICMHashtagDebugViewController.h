@class NSTextField;
@protocol ICMHashtagDebugViewControllerDelegate;

@interface ICMHashtagDebugViewController : NSViewController

@property (weak, nonatomic) id<ICMHashtagDebugViewControllerDelegate> delegate;
@property (weak) NSTextField *textField;

- (void).cxx_destruct;
- (void)addHashtag:(id)a0;

@end
