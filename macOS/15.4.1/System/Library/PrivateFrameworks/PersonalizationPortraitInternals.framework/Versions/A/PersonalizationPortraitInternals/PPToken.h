@class NSString;

@interface PPToken : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *tag;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 tag:(id)a1;

@end
