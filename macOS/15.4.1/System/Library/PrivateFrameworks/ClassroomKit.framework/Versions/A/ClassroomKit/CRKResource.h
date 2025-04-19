@class NSURL, NSDictionary;

@interface CRKResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *hostedURL;
@property (nonatomic, getter=isZippedBundle) BOOL zippedBundle;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithHostedURL:(id)a0 isZippedBundle:(BOOL)a1;
- (BOOL)isEqualToHostedResource:(id)a0;

@end
