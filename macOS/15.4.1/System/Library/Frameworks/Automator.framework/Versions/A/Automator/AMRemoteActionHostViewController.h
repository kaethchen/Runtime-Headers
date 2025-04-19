@class NSArray, NSLayoutConstraint;
@protocol AMRemoteActionHostViewControllerDelegate;

@interface AMRemoteActionHostViewController : NSRemoteViewController

@property (retain, nonatomic) NSLayoutConstraint *_remoteViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *_remoteViewHeightConstraint;
@property (copy, nonatomic) NSArray *_remoteViewSizeConstraints;
@property (weak, nonatomic) id<AMRemoteActionHostViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateViewConstraints;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
