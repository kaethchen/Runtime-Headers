@class PKPackageRequirements, NSString, PKPackage, NSMutableDictionary, NSDictionary, NSNumber, NSData;
@protocol PKPackageReferable;

@interface PKPackageSpecifier : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_userPathByComponentIdent;
    NSDictionary *_resolvedPathByComponentIdent;
    NSDictionary *_installPathByComponentIdent;
    NSData *_validatedDigest;
    NSString *_packageUniqueHash;
    PKPackage *_package;
    PKPackageRequirements *_requirements;
    NSString *_destinationPath;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *externalRootPath;
@property (retain) id<PKPackageReferable> packageReference;
@property (retain) NSString *prefixPath;
@property (copy) NSNumber *authLevel;
@property long long options;
@property (copy) NSString *displayName;
@property (copy) NSString *displayVersion;
@property (copy) NSNumber *installEnvironment;
@property (readonly) PKPackage *package;

+ (id)_adjustedSubpath:(id)a0 forPackageComponent:(id)a1 relocatedToPath:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)a0;
- (id)initWithPackage:(id)a0;
- (id)__adjustedInstallPathForComponent:(id)a0 provisionalPath:(id)a1 destination:(id)a2;
- (id)__checkForApplicationConflictForComponent:(id)a0 provisionalPath:(id)a1 destination:(id)a2;
- (id)__uniquePathForBundle:(id)a0;
- (id)userPathForComponentIdentifier:(id)a0;
- (id)_actualInstallPathForBundleComponent:(id)a0;
- (id)_adjustedSubpath:(id)a0 forPackageComponent:(id)a1 previous:(BOOL)a2;
- (BOOL)_bundleHasOriginalName:(id)a0;
- (id)_defaultInstallPathForBundleComponent:(id)a0;
- (id)_onDiskComponentForDestination:(id)a0 packageComponent:(id)a1 search:(BOOL)a2;
- (id)_packageUniqueHash;
- (id)_previousInstallPathForBundleComponent:(id)a0;
- (BOOL)_refersToSamePackage:(id)a0;
- (id)_requirements;
- (void)_resolveInstallPathsForDestination:(id)a0 replacingPriorResults:(BOOL)a1;
- (id)_resolvedPrefixPathForPackage;
- (id)_resolvedPrefixPathForPackageComponent:(id)a0;
- (BOOL)hasInstallPackageOptions:(long long)a0;
- (id)initWithPackageReference:(id)a0;
- (void)setUserPath:(id)a0 forComponentIdentifier:(id)a1;

@end
