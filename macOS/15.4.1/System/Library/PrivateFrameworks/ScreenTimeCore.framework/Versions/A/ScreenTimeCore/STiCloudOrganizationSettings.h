@class NSString, STiCloudOrganization;

@interface STiCloudOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) BOOL isAppAndWebsiteActivityEnabled;
@property (retain, nonatomic) STiCloudOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)_validateNumberOfCloudSettings:(id)a0;
- (BOOL)_validateUser:(id)a0;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;

@end
