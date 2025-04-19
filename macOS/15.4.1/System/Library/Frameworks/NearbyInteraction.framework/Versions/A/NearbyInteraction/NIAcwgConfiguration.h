@class NSString, NSDictionary;

@interface NIAcwgConfiguration : NIConfiguration {
    long long _configurationTypeInternal;
}

@property (readonly) long long configurationType;
@property (copy) NSString *lockIdentifier;
@property unsigned short lockBtConnHandle;
@property (copy) NSDictionary *debugOptions;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)descriptionInternal;
- (id)initWithLockIdentifier:(id)a0;

@end
