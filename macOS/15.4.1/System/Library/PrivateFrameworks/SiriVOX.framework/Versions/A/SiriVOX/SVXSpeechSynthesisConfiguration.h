@class AFVoiceInfo, NSLocale;

@interface SVXSpeechSynthesisConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) AFVoiceInfo *outputVoiceInfo;
@property (readonly, copy, nonatomic) NSLocale *locale;

+ (id)configurationWithLocale:(id)a0;
+ (id)configurationWithOutputVoiceInfo:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 outputVoiceInfo:(id)a1;

@end
