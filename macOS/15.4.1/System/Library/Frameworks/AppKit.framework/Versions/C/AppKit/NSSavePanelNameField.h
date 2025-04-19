@class NSString;

@interface NSSavePanelNameField : NSTextField

@property (copy, nonatomic) NSString *currentExtension;

- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)selectNameExcludingExtension;

@end
