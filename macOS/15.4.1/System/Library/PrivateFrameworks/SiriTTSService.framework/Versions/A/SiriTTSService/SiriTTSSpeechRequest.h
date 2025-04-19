@class SiriTTSSynthesisContext, SiriTTSAudibleContext, NSString;

@interface SiriTTSSpeechRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol, SiriTTSSynthesizingRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ synthesisContext;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)rate;
- (void)setRate:(float)a0;
- (void)setVoice:(id)a0;
- (void)setVolume:(float)a0;
- (id)text;
- (id)voice;
- (float)volume;
- (void)setText:(id)a0;
- (float)pitch;
- (void)setPitch:(float)a0;
- (void)setContextInfo:(id)a0;
- (void)setPrivacySensitive:(BOOL)a0;
- (id)contextInfo;
- (void)setImmediate:(BOOL)a0;
- (BOOL)immediate;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:(unsigned int)a0;
- (id)initWithText:(id)a0 voice:(id)a1;
- (BOOL)whisper;
- (id)customResourceURLs;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (id /* block */)didStartSpeaking;
- (BOOL)disableCompactVoice;
- (BOOL)minimizeDeviceUsage;
- (float)playbackVolume;
- (BOOL)privacySensitive;
- (id)prosodyProperties;
- (void)setCustomResourceURLs:(id)a0;
- (void)setDidGenerateAudio:(id /* block */)a0;
- (void)setDidGenerateWordTimings:(id /* block */)a0;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setDisableCompactVoice:(BOOL)a0;
- (void)setMinimizeDeviceUsage:(BOOL)a0;
- (void)setPlaybackVolume:(float)a0;
- (void)setProsodyProperties:(id)a0;
- (void)setSiriAceViewId:(id)a0;
- (void)setSiriRequestId:(id)a0;
- (void)setSynthesisProfile:(long long)a0;
- (void)setWhisper:(BOOL)a0;
- (id)siriAceViewId;
- (id)siriRequestId;
- (long long)synthesisProfile;

@end
