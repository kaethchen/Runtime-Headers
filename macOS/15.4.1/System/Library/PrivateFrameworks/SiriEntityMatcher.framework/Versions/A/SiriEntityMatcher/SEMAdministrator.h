@class NSObject;
@protocol OS_dispatch_queue, SEMAdminService;

@interface SEMAdministrator : NSObject {
    NSObject<SEMAdminService> *_adminService;
    double _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)sharedQueue;

- (id)init;
- (void).cxx_destruct;
- (unsigned char)_synchronouslyWrapRequest:(id /* block */)a0;
- (unsigned char)beginEvaluation:(id)a0;
- (unsigned char)endEvaluation;
- (void)endEvaluation:(id /* block */)a0;
- (id)initWithAdminService:(id)a0 timeout:(double)a1 queue:(id)a2;
- (void)triggerMaintenance:(BOOL)a0 completion:(id /* block */)a1;
- (void)beginEvaluation:(id)a0 completion:(id /* block */)a1;
- (unsigned char)beginEvaluationWithSerializedSets:(id)a0;
- (void)beginEvaluationWithSerializedSets:(id)a0 completion:(id /* block */)a1;

@end
