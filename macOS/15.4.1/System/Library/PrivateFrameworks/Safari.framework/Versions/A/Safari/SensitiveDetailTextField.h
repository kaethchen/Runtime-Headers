@class NSString;

@interface SensitiveDetailTextField : NSTextField {
    NSString *_sensitiveStringValue;
}

@property (copy, nonatomic) NSString *sensitiveStringValue;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)textDidEndEditing:(id)a0;
- (id)_obscuredStringValue;

@end
