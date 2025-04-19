@class NSString, NSArray, NSAttributedString;

@interface SPTextInput : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *tokenIDs;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0;
- (id)initWithText:(id)a0;
- (unsigned long long)tokenLength;
- (id)initWithTokenIds:(id)a0;

@end
