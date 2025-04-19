@class RSGenerationConfiguration, RSOfflineFloorPlanGenerator, NSString, RSOfflineInfoDumper, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RSGenerationSession : NSObject {
    NSObject<OS_dispatch_semaphore> *_generationSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    RSOfflineFloorPlanGenerator *_fpGenerator;
    RSGenerationConfiguration *_configuration;
    NSString *_logDir;
    RSOfflineInfoDumper *_offlineInfoDumper;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)generatePointListsWithFloorplan:(id)a0;
- (void)generatePointListsWithFloorplan:(id)a0 completionHandler:(id /* block */)a1;
- (id)getDebugInfo;
- (id)processMultiLevelWithMultiFloorPlan:(id)a0 withKeyframes:(id)a1;
- (void)processMultiLevelWithMultiFloorPlan:(id)a0 withKeyframes:(id)a1 completionHandler:(id /* block */)a2;
- (void)processMultiLevelWithMultiFloorPlan:(id)a0 withKeyframes:(id)a1 completionHandlerWithError:(id /* block */)a2;
- (id)processWithKeyframes:(id)a0 initialAsset:(id)a1;
- (void)processWithKeyframes:(id)a0 initialAsset:(id)a1 completionHandler:(id /* block */)a2;
- (void)processWithKeyframes:(id)a0 initialAsset:(id)a1 completionHandlerWithError:(id /* block */)a2;
- (id)processWithKeyframes:(id)a0 initialAsset:(id)a1 error:(id *)a2;
- (id)processWithMultiFloorPlan:(id)a0;
- (void)processWithMultiFloorPlan:(id)a0 completionHandler:(id /* block */)a1;
- (void)processWithMultiFloorPlan:(id)a0 completionHandlerWithError:(id /* block */)a1;
- (id)processWithMultiFloorPlan:(id)a0 error:(id *)a1;
- (void)processWithMultiFloorPlanDict:(id)a0 completionHandler:(id /* block */)a1;
- (void)processWithMultiFloorPlanDict:(id)a0 completionHandlerWithError:(id /* block */)a1;
- (void)setupOfflineDumpWithLogDir:(id)a0;
- (id)standardizeFloorPlan:(id)a0;
- (void)updateLcnnParams:(id)a0;

@end
