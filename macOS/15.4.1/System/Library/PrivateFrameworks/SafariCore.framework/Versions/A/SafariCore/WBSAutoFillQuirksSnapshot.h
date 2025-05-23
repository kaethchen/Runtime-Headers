@class NSArray, NSDictionary, NSSet, NSString;

@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSDictionary *_autoFillQuirks;
}

@property (readonly, copy, nonatomic) NSDictionary *passwordRequirementsByDomain;
@property (readonly, copy, nonatomic) NSArray *domainsWithAssociatedCredentials;
@property (readonly, copy, nonatomic) NSArray *domainsIneligibleForPasswordAuditing;
@property (readonly, copy, nonatomic) NSArray *domainsToConsiderIdentical;
@property (readonly, copy, nonatomic) NSDictionary *changePasswordURLsByDomain;
@property (readonly, copy, nonatomic) NSDictionary *appIDsToDomainsAssociations;
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForAutomaticLogin;
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForStreamlinedLogin;
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForPasskeys;
@property (readonly, copy, nonatomic) NSSet *domainsForPasskeyFallbackUI;
@property (readonly, copy, nonatomic) NSSet *domainsThatWhenEmbeddedAsThirdPartyAskForPasswordsForOtherServices;
@property (readonly, copy, nonatomic) NSSet *domainsKnownToDoSameDocumentNavigationInTextEditingCallback;
@property (readonly, copy, nonatomic) NSArray *knownWebBrowsers;
@property (readonly, copy, nonatomic) NSArray *knownExtensionStorefronts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)snapshotData;
- (id)initWithSnapshotData:(id)a0 error:(id *)a1;
- (id)_appIDsToDomainsAssociationsFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_changePasswordURLStringsByDomainFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_domainsSetFromAutoFillQuirks:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)_domainsToConsiderIdenticalFromAutoFillQuirls:(id)a0 error:(id *)a1;
- (id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)a0 error:(id *)a1;
- (id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)a0 error:(id *)a1;

@end
