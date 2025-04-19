@class SFTranscriberModelOptions, NSLocale;

@interface SFSpeechAnalyzerTranscriberOptions : NSObject

@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) SFTranscriberModelOptions *modelOptions;
@property (nonatomic) unsigned long long transcriptionOptions;

- (id)init;
- (void).cxx_destruct;

@end
