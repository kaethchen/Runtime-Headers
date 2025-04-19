@class NSString;

@interface AMFFeedContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *htmlString;
@property (copy) NSString *_cachedPlainTextString;
@property (readonly, nonatomic) NSString *plainTextString;

+ (id)plainTextStringFromHTMLString:(id)a0 error:(id *)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithHTMLString:(id)a0;

@end
