@interface GKTokenField : NSTokenField

@property (nonatomic) BOOL expectingCurrentEditor;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textDidEndEditing:(id)a0;

@end
