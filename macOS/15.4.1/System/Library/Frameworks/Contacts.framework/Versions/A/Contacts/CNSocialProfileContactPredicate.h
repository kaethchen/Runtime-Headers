@class NSString, CNSocialProfile;

@interface CNSocialProfileContactPredicate : CNPredicate <CNCDContactPredicate, CNSuggestedContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) CNSocialProfile *socialProfile;

+ (BOOL)supportsSecureCoding;
+ (id)predicateForKey:(id)a0 containsValue:(id)a1;
+ (id)predicatesForBundleIdentifier:(id)a0;
+ (id)predicatesForDisplayName:(id)a0;
+ (id)predicatesForServiceName:(id)a0;
+ (id)predicatesForTeamIdentifier:(id)a0;
+ (id)predicatesForURLString:(id)a0;
+ (id)predicatesForUserIdentifier:(id)a0;
+ (id)predicatesForUsername:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (id)initWithSocialProfile:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;

@end
