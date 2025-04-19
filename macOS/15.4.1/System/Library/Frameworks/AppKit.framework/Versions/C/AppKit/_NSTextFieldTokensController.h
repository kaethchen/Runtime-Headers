@class NSTextField;

@interface _NSTextFieldTokensController : NSTextTokensController

@property (retain) NSTextField *textField;

- (void).cxx_destruct;
- (id)untokenizedText;
- (id)initWithTextField:(id)a0;
- (void)replaceUntokenizedTextWithToken:(id)a0;
- (void)setTokens:(id)a0;
- (void)setUntokenizedText:(id)a0;
- (id)tokens;

@end
