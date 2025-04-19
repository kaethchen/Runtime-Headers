@class NSTextField, NSView, NSPanel, NSButton;
@protocol ABCardCollectionRowView;

@interface ABCustomLabelController : NSObject {
    NSPanel *mEditPanel;
    NSTextField *mLabelField;
    NSButton *mOkayButton;
    NSView<ABCardCollectionRowView> *mDatumView;
}

+ (void)addCustomLabelToDatumView:(id)a0;

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)commit:(id)a0;
- (void)help:(id)a0;
- (id)initWithDatumView:(id)a0;
- (void)runLabelSheet;

@end
