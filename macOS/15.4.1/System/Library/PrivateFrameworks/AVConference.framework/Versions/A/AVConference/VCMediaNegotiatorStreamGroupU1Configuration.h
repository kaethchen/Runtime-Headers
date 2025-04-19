@class NSArray, NSSet, NSOrderedSet, NSDictionary, VCVideoRuleCollections;

@interface VCMediaNegotiatorStreamGroupU1Configuration : NSObject <NSCopying>

@property (nonatomic) unsigned char supportedDirection;
@property (nonatomic) unsigned int ssrc;
@property (retain, nonatomic) NSArray *payloadPreference;
@property (nonatomic) BOOL allowAudioRecording;
@property (retain, nonatomic) NSSet *audioPayloads;
@property (retain, nonatomic) NSOrderedSet *supportedCipherSuites;
@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSDictionary *videoFeatureStrings;
@property (retain, nonatomic) NSDictionary *videoFeatureStringsFixedPosition;
@property (retain, nonatomic) NSArray *videoPayloads;
@property (retain, nonatomic) NSArray *videoParameterSet;
@property (nonatomic) unsigned int screenPixelCount;

+ (id)negotiatedAudioSettingsForGroupID:(unsigned int)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
+ (id)negotiatedVideoSettingsForGroupID:(unsigned int)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
+ (void)negotiateFeatureStrings:(id)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
+ (long long)negotiateU1CipherSuiteForStreamGroupID:(unsigned int)a0 remoteSupportedCipherSuites:(id)a1;
+ (id)negotiatedMicrophoneSettingsBetweenLocalU1Config:(id)a0 remoteU1Config:(id)a1;
+ (id)negotiatedScreenSettingsBetweenLocalU1Config:(id)a0 remoteU1Config:(id)a1;
+ (id)negotiatedSystemAudioSettingsBetweenLocalU1Config:(id)a0 remoteU1Config:(id)a1;
+ (id)negotiatedVideoSettingsBetweenLocalU1Config:(id)a0 remoteU1Config:(id)a1 streamGroupID:(unsigned int)a2;
+ (BOOL)ssrcForStreamGroup:(unsigned int)a0 localConfig:(id)a1 ssrc:(unsigned int *)a2;
+ (void)updateBodyDataU1Config:(id)a0 bodyDataConfiguration:(id)a1;
+ (void)updateCameraU1Config:(id)a0 cameraConfiguration:(id)a1;
+ (BOOL)updateCommonNegotiatedVideoSettings:(id)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
+ (void)updateFaceTextureU1Config:(id)a0 faceTextureConfiguration:(id)a1;
+ (void)updateScreenU1Config:(id)a0 screenConfiguration:(id)a1;
+ (BOOL)updateVideoPayloadsAndParametersForU1Config:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initStreamGroupU1ConfigForGroupId:(unsigned int)a0 withLocalConfig:(id)a1;
- (id)initWithSSRC:(unsigned int)a0;
- (void)updateWithAudioConfiguration:(id)a0 mediaType:(unsigned char)a1;

@end
