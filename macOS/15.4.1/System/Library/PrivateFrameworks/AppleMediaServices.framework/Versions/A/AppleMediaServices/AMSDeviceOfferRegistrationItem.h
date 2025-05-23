@class NSString, NSData;

@interface AMSDeviceOfferRegistrationItem : NSObject <AMSStorageDatabasePersistable>

@property (readonly) NSString *model;
@property (readonly) NSString *serialNumber;
@property (readonly) NSData *validationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseEntry:(id)a0;
- (id)initWithSerialNumber:(id)a0 model:(id)a1 validationData:(id)a2;
- (BOOL)isEqualToRegistrationItem:(id)a0;
- (id)serializeToDictionary;

@end
