@class PHASENumberMetaParameter, AVAudioFormat, PHASEMixer;

@interface PHASEPushStreamNode : PHASEStreamNode

@property (readonly, nonatomic) PHASENumberMetaParameter *gainMetaParameter;
@property (readonly, nonatomic) PHASENumberMetaParameter *rateMetaParameter;
@property (readonly, nonatomic) PHASEMixer *mixer;
@property (readonly, nonatomic) AVAudioFormat *format;

- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2 completionCallbackType:(long long)a3 completionHandler:(id /* block */)a4;
- (void)scheduleBuffer:(id)a0 completionCallbackType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)scheduleBuffer:(id)a0;
- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2;

@end
