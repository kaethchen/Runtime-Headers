@interface MSASCloudKitPlugin : NSObject

+ (id)_decryptedObjectForRecord:(id)a0 forKey:(id)a1 validateClass:(Class)a2;
+ (void)_fetchRecordWithRecordID:(id)a0 zoneName:(id)a1 fieldName:(id)a2 ownerUserID:(id)a3 isOwned:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (void)fetchClientOrgKeyForRecordID:(id)a0 zoneName:(id)a1 fieldName:(id)a2 ownerUserID:(id)a3 isOwned:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (id)fetchMigrationCtag;

@end
