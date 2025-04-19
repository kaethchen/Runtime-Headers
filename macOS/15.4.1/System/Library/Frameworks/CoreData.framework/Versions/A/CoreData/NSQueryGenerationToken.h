@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSQueryGenerationToken *currentQueryGenerationToken;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)nostoresQueryGenerationToken;
+ (id)unpinnedQueryGenerationToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEnabled;

@end
