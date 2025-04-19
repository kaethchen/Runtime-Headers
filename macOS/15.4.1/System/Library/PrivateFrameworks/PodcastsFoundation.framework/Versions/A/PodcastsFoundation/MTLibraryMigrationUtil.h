@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (BOOL)isMomCompatible:(id)a0;
+ (BOOL)isNewInstall;
+ (id)libraryImageStoreType;
+ (BOOL)needsCoreDataMigration;
+ (BOOL)needsDataMigration;
+ (BOOL)needsImageStoreMigration;
+ (void)setLibraryImageStoreType:(id)a0;

@end
