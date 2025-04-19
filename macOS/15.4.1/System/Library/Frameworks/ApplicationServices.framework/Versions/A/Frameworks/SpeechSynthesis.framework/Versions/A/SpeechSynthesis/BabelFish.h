@class NSArray, NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BabelFish : NSObject <TTSAXResourceManagerObserver>

@property (retain, nonatomic) NSMutableDictionary *speechChannelMap;
@property (retain, nonatomic) NSMutableDictionary *languageToCharacterRangesCache;
@property (retain, nonatomic) NSArray *cachedVoices;
@property (retain, nonatomic) NSDictionary *voicesBySpec;
@property (retain, nonatomic) NSMutableDictionary *localeNameCache;
@property (retain, nonatomic) NSDictionary *disambiguationMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceAccessQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)localeUtilities;
+ (id)resourceManager;
+ (id)axLanguageManager;
+ (id)axSettings;
+ (id)migrationUtils;
+ (struct VoiceSpec { unsigned int x0; unsigned int x1; })specForTTSVoice:(id)a0;
+ (id)stringKeyForVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (id)voiceForLocale:(id)a0;
- (id)_disambiguationMatrixForVoices:(id)a0;
- (id)_characterRangesForLocaleCode:(id)a0;
- (id)_disambiguationKeyForVoice:(id)a0;
- (void)_ensureCachedVoicesLoaded;
- (void)_monitorAudioDevices;
- (id)_voiceForIdentifier:(id)a0;
- (BOOL)_voiceInAllowList:(id)a0 allowList:(id)a1;
- (id)allVoices;
- (id)characterRangesForVoice:(id)a0;
- (void)devicesChanged;
- (id)exemplarCharacterRangesForLocaleString:(id)a0;
- (id)getChannel:(long long)a0;
- (BOOL)hasSiriEntitlement;
- (short)killChannel:(long long)a0;
- (id)nameForLocale:(id)a0;
- (id)nameForVoice:(id)a0;
- (id)newChannel:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a0;
- (struct SpeechChannelRecord { long long x0[1]; } *)nextChannelIdentifier;
- (short)performForChannel:(long long)a0 block:(id /* block */)a1;
- (void)resourceCacheDidReceiveUpdate;
- (BOOL)speechBusy;
- (id)substitutionsForMap:(id)a0;
- (id)voiceForIdentifier:(id)a0;
- (id)voiceForLocale:(id)a0 allowedIdentifiers:(id)a1;
- (id)voiceForSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;

@end
