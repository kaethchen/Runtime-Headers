@class NSDictionary, NSMutableDictionary;

@interface TTSLocaleUtilities : NSObject

@property (retain, nonatomic) NSDictionary *generalLanguageCodeData;
@property (retain, nonatomic) NSDictionary *voiceIdSampleStringData;
@property (retain, nonatomic) NSDictionary *canonicalLanguageCodeVoiceNamesData;
@property (retain, nonatomic) NSMutableDictionary *fallbackSampleStringCache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)sampleStringForVoiceIdentifier:(id)a0;
- (id)defaultVoiceIdentifierForGeneralLanguageCode:(id)a0;
- (id)defaultVoiceIdentifierForVoiceName:(id)a0;

@end
