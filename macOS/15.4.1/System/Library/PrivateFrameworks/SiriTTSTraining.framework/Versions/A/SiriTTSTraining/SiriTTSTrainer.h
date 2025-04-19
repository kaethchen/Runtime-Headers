@protocol SiriTTSTrainerTaskDelegate;

@interface SiriTTSTrainer : NSObject {
    struct shared_ptr<SiriTTS::TTSTrainer> { struct TTSTrainer *__ptr_; struct __shared_weak_count *__cntrl_; } _trainer;
    id<SiriTTSTrainerTaskDelegate> _delegate;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)pause;
- (void)stop;
- (id)initWithPaths:(id)a0 dataAssetPath:(id)a1 inferenceAssetPath:(id)a2;
- (id)initWithPaths:(id)a0 dataAssetPath:(id)a1 inferenceAssetPath:(id)a2 taskId:(id)a3;
- (long long)start_preprocess:(id)a0;
- (long long)start_train:(long long)a0 delegate:(id)a1;

@end
