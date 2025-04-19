@interface HDDatabasePruningShow : NSObject

+ (id)classifiedDeletedSampleInfoWithProfile:(id)a0 referenceDate:(id)a1 anchor:(long long)a2 limit:(long long)a3 error:(id *)a4;
+ (id)deletedSampleDetailWithProfile:(id)a0 matchingPredicatesOnly:(BOOL)a1 referenceDate:(id)a2 sampleUUID:(id)a3 error:(id *)a4;
+ (id)deletedSampleInfoWithProfile:(id)a0 referenceDate:(id)a1 error:(id *)a2;
+ (id)deletedSamplesDetailWithProfile:(id)a0 matchingPredicatesOnly:(BOOL)a1 referenceDate:(id)a2 anchor:(long long)a3 limit:(long long)a4 error:(id *)a5;
+ (id)showAndDeletedSampleInfoWithProfile:(id)a0 referenceDate:(id)a1 error:(id *)a2;
+ (id)showWithProfile:(id)a0 deletedSamplesOnly:(BOOL)a1 referenceDate:(id)a2 error:(id *)a3;

- (id)init;

@end
