@interface MFPersistenceDatabaseSchema_macOS : EDPersistenceDatabaseSchema <EDPersistenceDatabaseSchemaProvider>

+ (id)additionalSchemaProviders;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)_messagesTableSchemaAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)mailboxesTableSchema;

@end
