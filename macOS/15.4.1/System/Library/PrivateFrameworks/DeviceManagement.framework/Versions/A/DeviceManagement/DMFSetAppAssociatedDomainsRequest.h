@class NSArray;

@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest

@property (copy, nonatomic) NSArray *associatedDomains;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
