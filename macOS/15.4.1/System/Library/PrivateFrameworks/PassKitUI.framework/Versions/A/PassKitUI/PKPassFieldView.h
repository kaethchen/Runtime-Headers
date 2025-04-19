@class NSString, PKPassTextField;

@interface PKPassFieldView : NSView

@property (readonly) NSString *key;
@property (readonly) PKPassTextField *labelField;
@property (readonly) PKPassTextField *valueField;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_textFieldWithValue:(id)a0;
- (id)initWithFieldType:(int)a0 key:(id)a1 label:(id)a2 value:(id)a3;

@end
