@class NSString, NSTextField;
@protocol SSCurtainMessageViewControllerDelegate;

@interface SSCurtainMessageViewController : NSViewController {
    NSString *_machineName;
}

@property NSTextField *curtainMessageTextField;
@property (getter=isRunningAsSheet) BOOL runningAsSheet;
@property id<SSCurtainMessageViewControllerDelegate> delegate;
@property (retain) NSString *machineName;
@property (copy) NSString *curtainMessage;

- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)cancelClicked:(id)a0;
- (void)okClicked:(id)a0;
- (void)focus;
- (void)updateTitle;

@end
