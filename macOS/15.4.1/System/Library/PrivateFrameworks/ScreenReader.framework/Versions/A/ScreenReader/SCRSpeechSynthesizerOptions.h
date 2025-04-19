@class NSDictionary;

@interface SCRSpeechSynthesizerOptions : NSObject

@property (nonatomic) double pitchBase;
@property (nonatomic) double volume;
@property (nonatomic) double rate;
@property (retain, nonatomic) NSDictionary *phonemeSubstitutions;
@property (retain, nonatomic) NSDictionary *perVoiceSettings;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
