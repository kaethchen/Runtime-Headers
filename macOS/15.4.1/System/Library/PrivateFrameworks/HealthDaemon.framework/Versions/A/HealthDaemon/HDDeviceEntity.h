@interface HDDeviceEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)deviceEntitiesWithProperty:(id)a0 matchingValues:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)_codableDeviceWithRow:(struct HDSQLiteRow { } *)a0;
+ (id)_insertDeviceWithUUID:(id)a0 creationDate:(double)a1 name:(id)a2 manufacturer:(id)a3 model:(id)a4 hardwareVersion:(id)a5 firmwareVersion:(id)a6 softwareVersion:(id)a7 localIdentifier:(id)a8 UDIDeviceIdentifier:(id)a9 syncProvenance:(long long)a10 syncIdentity:(long long)a11 database:(id)a12 error:(id *)a13;
+ (id)_propertiesForDevice;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)deviceEntitiesWithDevice:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)deviceEntityWithDevice:(id)a0 syncIdentity:(long long)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)deviceEntityWithDevice:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)deviceEntityWithUUID:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (BOOL)insertCodableDevices:(id)a0 syncProvenance:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)uniquedColumns;

- (id)creationDateInHealthDatabase:(id)a0 error:(id *)a1;
- (id)deviceInHealthDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInDatabase:(id)a0 error:(id *)a1;
- (id)deviceUUIDInHealthDatabase:(id)a0 error:(id *)a1;

@end
