@class NSString, NSValue;

@interface SPQUParseTokenArgument : NSObject

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *tokenLabel;
@property (retain, nonatomic) NSValue *tokenRange;

- (void).cxx_destruct;
- (id)getEncodedData;
- (id)initWithLabel:(id)a0 token:(id)a1 tokenRange:(id)a2;

@end
