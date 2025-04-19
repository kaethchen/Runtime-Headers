@class NSTextView;

@interface CalUITextFieldCell : NSTextFieldCell

@property (retain) NSTextView *fieldEditor;

- (id)init;
- (void).cxx_destruct;
- (id)fieldEditorForView:(id)a0;
- (void)configureWithFont:(id)a0 textColor:(id)a1 linkColor:(id)a2;

@end
