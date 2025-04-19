@class TRIExperimentDatabase;

@interface TRIExperimentUpdateProcessor : NSObject {
    TRIExperimentDatabase *_experimentDatabase;
}

- (void).cxx_destruct;
- (id)_updateExperimentEndDateWithDeployment:(id)a0 withNewEndDate:(id)a1 scheduleDeactivationTask:(BOOL)a2 scheduleDeactivationNow:(BOOL)a3;
- (id)initWithExperimentDatabase:(id)a0;
- (id)processUpdateOperationForExistingExperimentWithEndDate:(id)a0 withExperimentDeployment:(id)a1;

@end
