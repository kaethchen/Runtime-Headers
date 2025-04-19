@class HDCloudSyncMedicalIDRecord, _HKMedicalIDData;

@interface HDCloudSyncPipelineStageMedicalID : HDCloudSyncPipelineStage {
    _HKMedicalIDData *_localMedicalIDData;
    _HKMedicalIDData *_cloudMedicalIDData;
    HDCloudSyncMedicalIDRecord *_medicalIDRecord;
}

- (void).cxx_destruct;
- (void)main;

@end
