@class NSObject;
@protocol OS_dispatch_queue, CESRSpeechProfileAdminService;

@interface CESRSpeechProfileAdmin : NSObject {
    NSObject<CESRSpeechProfileAdminService> *_adminService;
    double _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)makeAdmin;

- (id)init;
- (void).cxx_destruct;
- (long long)_synchronouslyWrapRequest:(id /* block */)a0;
- (long long)beginEvaluation:(id)a0;
- (long long)endEvaluation;
- (void)endEvaluation:(id /* block */)a0;
- (id)initWithAdminService:(id)a0 queue:(id)a1;
- (id)initWithAdminService:(id)a0 timeout:(double)a1 queue:(id)a2;
- (void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (void)triggerMaintenance:(BOOL)a0 completion:(id /* block */)a1;
- (void)beginEvaluation:(id)a0 completion:(id /* block */)a1;
- (long long)beginEvaluationWithSetEnumerator:(id)a0;
- (void)beginEvaluationWithSetEnumerator:(id)a0 completion:(id /* block */)a1;

@end
