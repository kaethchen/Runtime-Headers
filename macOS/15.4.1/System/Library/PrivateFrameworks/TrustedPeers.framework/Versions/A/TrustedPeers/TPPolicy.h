@class NSArray, NSDictionary, NSSet, TPPolicyVersion;

@interface TPPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TPPolicyVersion *version;
@property (retain, nonatomic) NSArray *modelToCategory;
@property (retain, nonatomic) NSDictionary *categoriesByView;
@property (retain, nonatomic) NSDictionary *introducersByCategory;
@property (retain, nonatomic) NSArray *keyViewMapping;
@property (retain, nonatomic) NSSet *userControllableViewList;
@property (retain, nonatomic) NSSet *piggybackViews;
@property (retain, nonatomic) NSSet *priorityViews;
@property (retain, nonatomic) NSSet *inheritedExcludedViews;
@property BOOL unknownRedactions;

+ (id)policyWithModelToCategory:(id)a0 categoriesByView:(id)a1 introducersByCategory:(id)a2 keyViewMapping:(id)a3 unknownRedactions:(BOOL)a4 userControllableViewList:(id)a5 piggybackViews:(id)a6 priorityViews:(id)a7 inheritedExcludedViews:(id)a8 version:(id)a9;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)categoryForModel:(id)a0;
- (BOOL)isEqualToPolicy:(id)a0;
- (BOOL)peerInCategory:(id)a0 canAccessView:(id)a1;
- (id)syncingPolicyForModel:(id)a0 syncUserControllableViews:(int)a1 isInheritedAccount:(BOOL)a2 error:(id *)a3;
- (BOOL)trustedPeerInCategory:(id)a0 canIntroduceCategory:(id)a1;
- (id)viewsForModel:(id)a0 error:(id *)a1;

@end
