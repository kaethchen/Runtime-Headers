@class NSError, SiriTTSAudioData;

@interface SearchUI.SearchUITTSUtilities : NSObject

+ (void)stopWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)playWithAudioData:(SiriTTSAudioData *)a0 completionHandler:(void (^)(NSError *))a1;
+ (id)ttsAudioDataWithSfAudioData:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
