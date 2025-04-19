@class NSURL, NSDictionary;

@interface WBSManagedExtensionsController : NSObject {
    NSDictionary *_managedExtensionsState;
}

@property (class, readonly, nonatomic) NSURL *managedExtensionsConfigurationURL;

@property (readonly, nonatomic) BOOL hasAnyExtensionManagement;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_domainIsManaged:(id)a0 byManagedDomainSet:(id)a1;
- (void)_managedExtensionConfigurationDidChange:(id)a0;
- (void)_readManagedExtensionsStateFromDisk;
- (BOOL)allDomainsAreManagedForComposedIdentifier:(id)a0;
- (id)allowedDomainsForComposedIdentifier:(id)a0;
- (BOOL)anyDomainIsManagedForComposedIdentifier:(id)a0;
- (id)deniedDomainsForComposedIdentifier:(id)a0;
- (BOOL)domainIsDenied:(id)a0 forComposedIdentifier:(id)a1;
- (BOOL)domainIsManaged:(id)a0 forComposedIdentifier:(id)a1;
- (long long)managedExtensionPrivateBrowsingStateForComposedIdentifier:(id)a0;
- (long long)managedExtensionStateForComposedIdentifier:(id)a0;

@end
