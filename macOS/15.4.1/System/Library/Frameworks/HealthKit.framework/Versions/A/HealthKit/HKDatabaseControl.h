@class NSString, HKProxyProvider;

@interface HKDatabaseControl : NSObject <_HKXPCExportable, HKDatabaseControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)performMigrationWithCompletion:(id /* block */)a0;
- (void)classifiedDeletedSampleInfoWithReferenceDate:(id)a0 anchor:(long long)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)deletedSampleDetailWithReferenceDate:(id)a0 matchingPredicatesOnly:(BOOL)a1 sampleUUID:(id)a2 completion:(id /* block */)a3;
- (void)deletedSampleInfoWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)deletedSamplesDetailWithReferenceDate:(id)a0 matchingPredicatesOnly:(BOOL)a1 anchor:(long long)a2 limit:(long long)a3 completion:(id /* block */)a4;
- (void)getHealthDirectorySizeInBytesWithCompletion:(id /* block */)a0;
- (id)healthDatabaseIdentifierWithError:(id *)a0;
- (void)hkqa_generateDemoDataWithDurationInDays:(long long)a0 completion:(id /* block */)a1;
- (void)hkqa_statisticsWithCompletion:(id /* block */)a0;
- (void)obliterateHealthDataWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pruneSamplesWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)showAndDeletedSampleInfoWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)showWithReferenceDate:(id)a0 deletedSamplesOnly:(BOOL)a1 completion:(id /* block */)a2;

@end
