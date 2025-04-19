@class NSProgressIndicator, NSTextField;

@interface CPUI_MacBuddyProgressHandler : NSObject <CPUI_ProgressHandler>

@property (weak) NSTextField *progressField;
@property (weak) NSProgressIndicator *progressSpinner;

+ (id)handlerWithOptionsFromMacBuddy:(id)a0;

- (void).cxx_destruct;
- (void)cpuiProgressHide;
- (void)cpuiProgressSetMessage:(id)a0;
- (id)cpuiWindowForSheet;

@end
