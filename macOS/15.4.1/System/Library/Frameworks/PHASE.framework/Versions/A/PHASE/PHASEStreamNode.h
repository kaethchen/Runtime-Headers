@class PHASEMixer, PHASEEngine, AVAudioFormat, NSNumber, PHASENumberMetaParameter;

@interface PHASEStreamNode : NSObject

@property (readonly) BOOL normalize;
@property (readonly) NSNumber *targetLKFS;
@property (readonly, weak, nonatomic) PHASEEngine *engine;
@property (readonly, nonatomic) struct UniqueObjectId { unsigned long long mStorage[2]; } actionTreeUniqueId;
@property (readonly, nonatomic) unsigned long long nodeUID;
@property (readonly, nonatomic) PHASENumberMetaParameter *gainMetaParameter;
@property (readonly, nonatomic) PHASENumberMetaParameter *rateMetaParameter;
@property (readonly, nonatomic) PHASEMixer *mixer;
@property (readonly, nonatomic) AVAudioFormat *format;

- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 actionTreeUniqueId:(struct UniqueObjectId { unsigned long long x0[2]; })a1 nodeStringHashId:(unsigned long long)a2 mixer:(id)a3 format:(id)a4 normalize:(BOOL)a5 targetLKFS:(id)a6;

@end
