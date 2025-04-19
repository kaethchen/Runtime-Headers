@interface MFAccountURLMigrator : NSObject

+ (id)accountURLStringFromV1V2PersistenceAccountAttributes:(id)a0 syncable:(BOOL)a1;
+ (id)accountURLStringWithIdentifierFromSystemAccount:(id)a0 syncable:(BOOL)a1;
+ (id)connectionHostnameAccountURLStringFromSystemAccount:(id)a0;

@end
