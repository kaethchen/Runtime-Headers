@interface IDSFeatureToggleRetrievalResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long error;

+ (id)resultWithError:(unsigned long long)a0;
+ (id)resultWithState:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(unsigned long long)a0 error:(unsigned long long)a1;

@end
