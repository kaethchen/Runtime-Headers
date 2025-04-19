@class NSTextField, NSString, NSPanel, NSProgressIndicator;

@interface DEProgressSheetController : NSObject {
    NSPanel *_sheet;
    NSTextField *_statusTextField;
    NSProgressIndicator *_statusProgressBar;
    id _delegate;
    id _operation;
}

@property (retain) NSString *statusString;
@property BOOL progressIsIndeterminate;
@property double progressBarValue;
@property double progressBarMaxValue;

- (void)dealloc;
- (void)closeSheet;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)beginSheetModalForWindow:(id)a0;
- (id)initWithDelegate:(id)a0 operation:(id)a1;

@end
