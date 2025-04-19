@class NSArray;

@interface VSIdentityProviderAppsResponse : NSObject

@property (copy, nonatomic) NSArray *providerAppAdamIDs;
@property (copy, nonatomic) NSArray *channelMappings;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
