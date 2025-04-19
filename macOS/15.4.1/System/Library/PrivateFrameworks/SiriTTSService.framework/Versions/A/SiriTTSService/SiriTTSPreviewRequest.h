@class NSString, SiriTTSAudibleContext, NSURL;

@interface SiriTTSPreviewRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol> {
    void /* unknown type, empty encoding */ language;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) void /* unknown type, empty encoding */ previewType;
@property (nonatomic, readonly) NSURL *previewAudioURL;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setImmediate:(BOOL)a0;
- (BOOL)immediate;
- (id)initWithVoice:(id)a0 previewType:(long long)a1;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:(unsigned int)a0;
- (id /* block */)didStartSpeaking;
- (float)playbackVolume;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setPlaybackVolume:(float)a0;
- (void)setSiriAceViewId:(id)a0;
- (void)setSiriRequestId:(id)a0;
- (id)siriAceViewId;
- (id)siriRequestId;

@end
