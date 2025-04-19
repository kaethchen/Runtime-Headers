@class SFSSTTSEngine;

@interface SFSSDeviceTTSTask : SFSpeechSynthesisTask

@property (weak, nonatomic) SFSSTTSEngine *ttsEngine;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)cancelTask;
- (void)startTask:(id /* block */)a0;

@end
