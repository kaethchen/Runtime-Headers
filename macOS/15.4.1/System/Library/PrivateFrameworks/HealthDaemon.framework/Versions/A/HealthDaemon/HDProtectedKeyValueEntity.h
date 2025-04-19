@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (long long)_deviceLocalCategory;
+ (const char *)_insertStatementKey;
+ (id)keyForUserCharacteristicType:(id)a0;
+ (id)modificationDateForCharacteristicWithType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)userCharacteristicForType:(id)a0 profile:(id)a1 entity:(id *)a2 error:(id *)a3;

@end
