@class SRAudioLevel, NSString, SRSpeechExpression, SNClassificationResult, NSDate, SFSpeechRecognitionResult;

@interface SRSpeechMetrics : NSObject <SRSampling, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) unsigned long long sessionFlags;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) double timeSinceAudioStart;
@property (readonly, nonatomic) SRAudioLevel *audioLevel;
@property (readonly, nonatomic) SFSpeechRecognitionResult *speechRecognition;
@property (readonly, nonatomic) SNClassificationResult *soundClassification;
@property (readonly, nonatomic) SRSpeechExpression *speechExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithSessionIdentifier:(id)a0 sessionFlags:(unsigned long long)a1 timestamp:(double)a2 audioLevel:(id)a3 speechRecognition:(id)a4 soundClassification:(id)a5 speechExpression:(id)a6;
- (id)initWithSessionIdentifier:(id)a0 sessionFlags:(unsigned long long)a1 timestamp:(double)a2 timeSinceAudioStart:(double)a3 audioLevel:(id)a4 speechRecognition:(id)a5 soundClassification:(id)a6 speechExpression:(id)a7;

@end
