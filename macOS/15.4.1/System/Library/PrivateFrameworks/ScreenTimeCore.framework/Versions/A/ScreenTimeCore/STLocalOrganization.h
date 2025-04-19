@class NSString, STLocalOrganizationSettings;

@interface STLocalOrganization : STCoreOrganization <STSerializableMappedObject>

@property (class, readonly) NSString *serializableClassName;

@property (retain, nonatomic) STLocalOrganizationSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)fetchOrCreateLocalOrganizationWithContext:(id)a0 error:(id *)a1;


@end
