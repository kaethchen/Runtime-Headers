@interface _LTSELFLoggingTranslationTTSData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long sourceOrTargetLanguage;
@property (nonatomic) BOOL isAutoplayTranslation;
@property (nonatomic) long long audioChannel;
@property (nonatomic) long long playbackSpeed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceOrTargetLanguage:(long long)a0 isAutoplayTranslation:(BOOL)a1 ttsPlaybackSpeed:(long long)a2 audioChannel:(long long)a3;

@end
