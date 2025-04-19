@interface NISystemConfiguration : NIConfiguration

@property (nonatomic) BOOL prewarmUWB;
@property (nonatomic) BOOL prewarmSecureElementChannel;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (BOOL)_internalIsMemoryAssertionRequired;

@end
