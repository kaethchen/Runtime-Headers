@class SiriTTSAudioData;

@interface SVXSpeechSynthesizerAudioData : NSObject

@property (readonly, nonatomic) SiriTTSAudioData *audioChunkData;
@property (readonly, nonatomic) unsigned long long audioChunkIndex;

- (void).cxx_destruct;
- (id)initWithAudioChunkData:(id)a0 audioChunkIndex:(unsigned long long)a1;

@end
