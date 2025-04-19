@class _SFSpeechRecognizerEndpointDetectorOptions, NSSet, _SFSpeechRecognizerModelOptions, _SFSpeechRecognizerSpeechDetectorOptions, NSLocale, EARVoiceCommandActiveSet;

@interface _SFSpeechRecognizerSupportedFeatures : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSSet *taskNames;
@property (readonly, copy, nonatomic) EARVoiceCommandActiveSet *voiceCommandActiveSet;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerModelOptions *modelOptions;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerEndpointDetectorOptions *endpointDetectionOptions;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerSpeechDetectorOptions *speechDetectionOptions;
@property (readonly, nonatomic) BOOL isSingleUtteranceTask;
@property (readonly, nonatomic) BOOL concatenateUtterances;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocale:(id)a0 taskNames:(id)a1 singleUtterance:(BOOL)a2 concatenateUtterances:(BOOL)a3 voiceCommandActiveSet:(id)a4 modelOptions:(id)a5 endpointDetectionOptions:(id)a6 speechDetectionOptions:(id)a7 flags:(unsigned long long)a8;

@end
