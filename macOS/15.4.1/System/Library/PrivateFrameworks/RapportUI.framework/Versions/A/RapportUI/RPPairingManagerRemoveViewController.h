@class NSString, NSProgressIndicator, NSTextField;

@interface RPPairingManagerRemoveViewController : NSViewController

@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSTextField *messageField;
@property (retain, nonatomic) NSTextField *infoField;
@property (retain, nonatomic) NSProgressIndicator *progressSpinner;
@property (retain, nonatomic) NSTextField *progressLabel;

- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)handleCancelButton:(id)a0;
- (void)handleRemoveButton:(id)a0;

@end
