@protocol CalUIColorPickerDelegate;

@interface CalUIColorPicker : NSView

@property (weak) id<CalUIColorPickerDelegate> delegate;
@property BOOL colorSelected;

- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (id)initWithSelectedSymbolicColors:(id)a0 delegate:(id)a1;

@end
