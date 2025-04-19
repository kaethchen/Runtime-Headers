@class NSString, NSArray;

@interface SGDOMParserResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *plainText;
@property (readonly, nonatomic) NSArray *taggedCharacterRanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlainText:(id)a0 taggedCharacterRanges:(id)a1;
- (void)insertSubject:(id)a0;
- (BOOL)isEqualToDOMParserResult:(id)a0;

@end
