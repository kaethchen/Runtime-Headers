@class NSArray, NSString;

@interface NSTextTokensController : NSObject

@property (copy) NSArray *tokens;
@property (copy) NSString *untokenizedText;

- (void)replaceUntokenizedTextWithToken:(id)a0;

@end
