@class NSString;

@interface HDDatabaseControlServer : HDStandardTaskServer <HKDatabaseControlServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_classifiedDeletedSampleInfoWithReferenceDate:(id)a0 anchor:(long long)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)remote_deletedSampleDetailWithReferenceDate:(id)a0 matchingPredicatesOnly:(BOOL)a1 sampleUUID:(id)a2 completion:(id /* block */)a3;
- (void)remote_deletedSampleInfoWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)remote_deletedSamplesDetailWithReferenceDate:(id)a0 matchingPredicatesOnly:(BOOL)a1 anchor:(long long)a2 limit:(long long)a3 completion:(id /* block */)a4;
- (void)remote_getHealthDatabaseIdentifierWithCompletion:(id /* block */)a0;
- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(id /* block */)a0;
- (void)remote_hkqa_generateDemoDataWithDurationInDays:(long long)a0 completion:(id /* block */)a1;
- (void)remote_hkqa_statisticsWithCompletion:(id /* block */)a0;
- (void)remote_obliterateHealthDataWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_performMigrationWithCompletion:(id /* block */)a0;
- (void)remote_pruneSamplesWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)remote_showAndDeletedSampleInfoWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)remote_showWithReferenceDate:(id)a0 deletedSamplesOnly:(BOOL)a1 completion:(id /* block */)a2;

@end
