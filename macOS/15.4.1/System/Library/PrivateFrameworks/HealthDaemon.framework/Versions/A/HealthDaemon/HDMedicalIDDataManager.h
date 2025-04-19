@class NSString, HDProfile;

@interface HDMedicalIDDataManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver, HDCloudSyncMedicalIDDataManager>

@property (weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)fetchMedicalIDIfSetUpWithError:(id *)a0;
- (void)_runEmergencyContactConsolidationWithCompletion:(id /* block */)a0;
- (BOOL)deleteMedicalIDDataWithError:(id *)a0;
- (id)fetchMedicalIDDataIfSetUpOrCreateDefaultWithError:(id *)a0;
- (id)fetchMedicalIDWithError:(id *)a0;
- (id)medicalIDClinicalContactsWithError:(id *)a0;
- (id)medicalIDEmergencyContactsWithError:(id *)a0;
- (long long)medicalIDSetupStatusWithError:(id *)a0;
- (BOOL)obliterateMedicalIDDataWithReason:(id)a0 error:(id *)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (void)runEmergencyContactConsolidationWithCompletion:(id /* block */)a0;
- (id)unitTest_medicalIDData;
- (BOOL)unitTest_persistMedicalIDData:(id)a0;
- (BOOL)updateMedicalIDWithLocalData:(id)a0 error:(id *)a1;
- (BOOL)updateMedicalIDWithSyncedData:(id)a0 provenance:(id)a1 error:(id *)a2;

@end
