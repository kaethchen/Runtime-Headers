@class NSMutableSet;

@interface LAAuthenticationRequirement : NSObject <LAACLSerializable> {
    long long _authType;
    NSMutableSet *_subrequirements;
}

@property (class, readonly) LAAuthenticationRequirement *defaultRequirement;
@property (class, readonly) LAAuthenticationRequirement *biometryRequirement;
@property (class, readonly) LAAuthenticationRequirement *biometryCurrentSetRequirement;

+ (id)biometryCurrentSetRequirementWithFallback:(id)a0;
+ (id)biometryRefreshableSetRequirementWithFallback:(id)a0;
+ (id)biometryRequirementWithFallback:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)key;
- (void)encodeWithACLCoder:(id)a0;
- (id)requirementByAddingExtendedRequirement:(id)a0;

@end
