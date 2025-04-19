@protocol CalUITextFieldEditorDelegate;

@interface CalUITextFieldEditor : NSTextView

@property BOOL shouldAllowVibrancy;
@property (weak) id<CalUITextFieldEditorDelegate> calUITextFieldDelegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)copy:(id)a0;
- (BOOL)isRichText;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)readSelectionFromPasteboard:(id)a0;
- (id)readablePasteboardTypes;
- (void)selectAll:(id)a0;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;

@end
