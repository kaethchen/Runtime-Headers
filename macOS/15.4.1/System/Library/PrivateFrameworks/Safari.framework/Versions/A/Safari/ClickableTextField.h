@protocol ClickableTextFieldDelegate;

@interface ClickableTextField : NSTextField

@property (weak, nonatomic) id<ClickableTextFieldDelegate> clickableTextFieldDelegate;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;

@end
