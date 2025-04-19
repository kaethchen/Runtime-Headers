@class NSImageView, NSTextField, NSString, NSSecureTextField;
@protocol PDFPasswordAlertDelegate;

@interface PDFPasswordAlert : NSViewController

@property (retain) NSImageView *imageView;
@property (retain) NSTextField *alertTextField;
@property (retain) NSTextField *informativeTextField;
@property (retain) NSSecureTextField *passwordTextField;
@property (copy, nonatomic) NSString *alertText;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *password;
@property (weak, nonatomic) id<PDFPasswordAlertDelegate> delegate;
@property (copy) id /* block */ validatePasswordBlock;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)cancelClicked:(id)a0;
- (void)unlockClicked:(id)a0;

@end
