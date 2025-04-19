@class NSDictionary, NSArray, NSURL;

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *voiceConfig;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSArray *resourceList;
@property (copy, nonatomic) NSURL *searchPathURL;

+ (id)legacyPlatforms;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)defaultVoice;
- (id)defaultFootprintString;
- (id)defaultTypeString;
- (void)syncWithConfigData:(id)a0 voiceType:(long long)a1;
- (void)syncWithConfigFile:(id)a0 voiceType:(long long)a1;

@end
