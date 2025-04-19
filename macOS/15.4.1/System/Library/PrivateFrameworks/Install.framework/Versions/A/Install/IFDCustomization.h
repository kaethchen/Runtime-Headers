@interface IFDCustomization : NSObject {
    struct IFDCustomization_Private { id x0; id x1; id x2; id x3; id x4; id x5; } *_private;
}

- (void)dealloc;
- (id)target;
- (id)distribution;
- (BOOL)empty;
- (id)additionalMedia;
- (id)initWithDistribution:(id)a0 andTarget:(id)a1;
- (void)addPackageToInstall:(id)a0;
- (void)addPackagesToInstall:(id)a0;
- (id)alternateLocationForPackageIdentifier:(id)a0;
- (id)distributionDescribingAdditionalMedia;
- (id)distributionDescribingMediaNamed:(id)a0;
- (id)mustCloseAppIdentifiers;
- (id)packagesToInstall;
- (int)requiredAuthorizationType;
- (int)requiredPostInstallAction;
- (void)setAlternateLocation:(id)a0 forPackageWithIdentifier:(id)a1;

@end
