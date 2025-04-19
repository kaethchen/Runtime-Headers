@interface CNCDIOSLegacyIdentifierSaveDistributor : NSObject

+ (BOOL)assignIOSLegacyIdentifiersToInsertedRecordsInManagedObjectContext:(id)a0 error:(id *)a1;
+ (BOOL)assignIOSLegacyIdentifiersToInsertedRecordsInManagedObjectContext:(id)a0 registrar:(id)a1 error:(id *)a2;
+ (void)assignRegistrations:(id)a0 targetRecords:(id)a1;
+ (id)registrationsForTargetRecords:(id)a0 registrar:(id)a1 error:(id *)a2;
+ (id)targetRecordsFromManagedObjectContext:(id)a0;

@end
