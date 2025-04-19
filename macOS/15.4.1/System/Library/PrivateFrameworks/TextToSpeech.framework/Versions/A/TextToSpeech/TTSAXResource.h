@class TTSSpeechVoice, NSString, AVSpeechSynthesisProviderVoice, NSArray, AXAsset, TTSVoiceAsset;
@protocol TTSSpeechService;

@interface TTSAXResource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetId;
@property (readonly, nonatomic) TTSSpeechVoice *speechVoice;
@property (retain, nonatomic) NSString *synthesizerBundleIdentifier;
@property (retain, nonatomic) NSString *componentSubType;
@property (nonatomic) long long footprint;
@property (nonatomic) unsigned long long assetSize;
@property (nonatomic) BOOL isInstalled;
@property (retain, nonatomic) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
@property (retain, nonatomic) AXAsset *axAsset;
@property (retain, nonatomic) TTSVoiceAsset *voiceAsset;
@property (readonly, nonatomic) NSArray *languages;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameWithFootprint;
@property (readonly, nonatomic) NSString *voiceId;
@property (readonly, nonatomic) NSString *contentPath;
@property (retain, nonatomic) NSString *onDiskContentPath;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) BOOL isNoveltyVoice;
@property (readonly, nonatomic) BOOL isPersonalVoice;
@property (nonatomic) BOOL isSystemVoice;
@property (readonly, nonatomic) BOOL isDefault;
@property (nonatomic) BOOL canBeDownloaded;
@property (nonatomic) long long memoryPeak;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long voiceType;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (weak, nonatomic) id<TTSSpeechService> service;

+ (id)localizedStringForKey:(id)a0;
+ (id)localizedName:(id)a0 forLanguage:(id)a1;
+ (id)localizedNameWithFootprint:(long long)a0 name:(id)a1;
+ (id)siriLocalizedNameForName:(id)a0 identifier:(id)a1 includeSiri:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)primaryLanguage;
- (id)initWithAsset:(id)a0;
- (long long)_resourceGenderFromStringInput:(id)a0;
- (void)_ensureFirstPartyComponents;
- (long long)_resourceFootprintFromStringInput:(id)a0;
- (unsigned long long)_resourceSubtypeFromStringInput:(id)a0;
- (unsigned long long)_resourceTypeFromStringInput:(id)a0;
- (id)initWithSSEVoice:(id)a0;
- (id)localizedNameForLanguage:(id)a0;
- (BOOL)memoryPeakExceedsActiveJetsamLimit;
- (id)nameAndFootprintForLanguage:(id)a0;
- (BOOL)shouldFilterResourceFromUI;

@end
