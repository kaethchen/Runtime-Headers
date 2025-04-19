@class NSMutableSet, HDDatabaseMigrationTransaction;

@interface HDDatabaseSchemaManager : NSObject {
    NSMutableSet *_createdDatabaseNames;
    HDDatabaseMigrationTransaction *_transaction;
}

- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0;
- (long long)currentVersionForSchema:(id)a0 protectionClass:(long long)a1 error:(id *)a2;
- (BOOL)setVersion:(long long)a0 schema:(id)a1 protectionClass:(long long)a2 error:(id *)a3;

@end
