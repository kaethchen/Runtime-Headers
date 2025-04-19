@class _EARVoiceCommandDebugInfo, NSArray, EARAudioAnalytics, EARSpeechRecognition, EARLatticeMitigatorResult, NSNumber, _EARPerformanceMarkers;

@interface EARSpeechRecognitionResultPackage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) EARSpeechRecognition *recognition;
@property (readonly, copy, nonatomic) EARSpeechRecognition *preITNRecognition;
@property (readonly, copy, nonatomic) EARSpeechRecognition *unrepairedRecognition;
@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, copy, nonatomic) EARAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) double utteranceStart;
@property (readonly, copy, nonatomic) NSArray *correctPartialResultIndexList;
@property (readonly, copy, nonatomic) NSArray *nBestVoiceCommandInterpretations;
@property (readonly, copy, nonatomic) NSArray *preITNNBestVoiceCommandInterpretations;
@property (readonly, nonatomic) BOOL recognitionPaused;
@property (readonly, nonatomic) BOOL firstResultAfterResume;
@property (readonly, nonatomic) NSNumber *endOfSentenceLikelihood;
@property (readonly, copy, nonatomic) EARLatticeMitigatorResult *latticeMitigatorResult;
@property (readonly, nonatomic) long long numOneBestTokensExcludingTriggerPhrase;
@property (readonly, copy, nonatomic) _EARVoiceCommandDebugInfo *voiceCommandDebugInfo;
@property (readonly, copy, nonatomic) _EARPerformanceMarkers *performanceMarkers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPackage:(id)a0;

@end
