@class NSString, NSMutableDictionary, NSNumber, ICLocalStoreAccountProperties;
@protocol ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend> {
    NSNumber *_activeAccountDSID;
    NSNumber *_activeLockerAccountDSID;
    NSMutableDictionary *_identityProperties;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
}

@property (class, copy, nonatomic) NSNumber *defaultActiveAccountDSID;
@property (class, copy, nonatomic) NSNumber *defaultActiveLockerAccountDSID;
@property (class, copy, nonatomic) NSString *defaultStorefrontIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<ICUserIdentityStoreBackendDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)synchronize;
- (id)_propertiesToSaveForProperties:(id)a0;
- (BOOL)disableLockerAccountDSID:(id)a0 error:(id *)a1;
- (id)accountDSIDForAltDSID:(id)a0 error:(id *)a1;
- (id)activeAccountDSIDWithError:(id *)a0;
- (id)activeLockerAccountDSIDWithError:(id *)a0;
- (id)allManageableStoreAccountDSIDsWithError:(id *)a0;
- (id)allStoreAccountDSIDsWithError:(id *)a0;
- (id)defaultMediaAccountDSIDWithError:(id *)a0;
- (id)identityPropertiesForDSID:(id)a0 error:(id *)a1;
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)a0;
- (id)localStoreAccountPropertiesWithError:(id *)a0;
- (void)removeIdentityForDSID:(id)a0 completion:(id /* block */)a1;
- (BOOL)replaceIdentityProperties:(id)a0 forDSID:(id)a1 error:(id *)a2;
- (BOOL)setIdentityProperties:(id)a0 forDSID:(id)a1 error:(id *)a2;
- (BOOL)setLocalStoreAccountProperties:(id)a0 error:(id *)a1;
- (BOOL)updateActiveAccountDSID:(id)a0 error:(id *)a1;
- (BOOL)updateActiveLockerAccountDSID:(id)a0 error:(id *)a1;
- (id)verificationContextForAccountEstablishmentWithError:(id *)a0;
- (id)verificationContextForDSID:(id)a0 error:(id *)a1;

@end
