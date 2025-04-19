@class SiriUITextInputView;
@protocol SiriUITextInputViewDelegate;

@interface SiriUITextInputFieldCell : NSSearchFieldCell

@property (retain, nonatomic) SiriUITextInputView *customFieldEditor;
@property (weak) id<SiriUITextInputViewDelegate> inputDelegate;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fieldEditorForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchTextRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
