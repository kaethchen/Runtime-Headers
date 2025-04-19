@class SCROutputSpeechComponent, NSString, SCROutputPunctuationSettings;

@interface SCROutputSubstitutionPunctuationParser : NSObject <SCROutputSubstitutionParserProtocol>

@property (readonly, nonatomic) SCROutputSpeechComponent *component;
@property (readonly, nonatomic) SCROutputPunctuationSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithSpeechComponent:(id)a0 punctuationSettings:(id)a1;
- (id)parseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofString:(id)a1 inAction:(id)a2;

@end
