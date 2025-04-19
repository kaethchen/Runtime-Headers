@class NSString;

@interface DMCComposedIdentifier : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *requirement;

+ (id)newComposedIdentifier:(id)a0;
+ (id)newComposedIdentifierWithBundleID:(id)a0;
+ (id)newComposedIdentifierWithBundleID:(id)a0 requirement:(id)a1;
+ (id)newComposedIdentifierWithBundleID:(id)a0 teamID:(id)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)designatedRequirement;
- (id)composedIdentifier;
- (id)initWithBundleID:(id)a0 teamID:(id)a1 requirement:(id)a2;
- (BOOL)isEqualToComposedIdentifier:(id)a0;

@end
