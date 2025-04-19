@class NSString, SOAudioDevice;

@interface SOAudioSource : NSObject {
    unsigned int _kind;
    NSString *_name;
    NSString *_sourceType;
    SOAudioDevice *_device;
}

- (void)dealloc;
- (id)description;
- (id)name;
- (id)device;
- (unsigned int)kind;
- (id)sourceType;
- (BOOL)isInternalMicrophone;
- (long long)suitabilityScore;
- (id)_debuggingAttributes;
- (id)initWithKind:(unsigned int)a0 forDevice:(id)a1 sourceName:(id)a2 sourceType:(id)a3;
- (BOOL)isDefaultInputDevice;
- (id)suitabilityExplanation;

@end
