@class CDPPrintBorderView, NSString, NSTextField;

@interface CDPRecoveryKeyPrintController : NSViewController

@property (retain) NSTextField *cdpKeyPrintTextField;
@property (retain) CDPPrintBorderView *cdpRecoveryKeyBorderView;
@property (retain) NSTextField *footerLabel;
@property (copy, nonatomic) NSString *cdpKeyPrintText;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
