@class SCROutputSpeechComponent, NSString, SCROutputPunctuationSettings;

@interface SCROutputSubstitutionIndentationParser : NSObject <SCROutputSubstitutionParserProtocol>

@property (readonly, nonatomic) SCROutputSpeechComponent *component;
@property (readonly, nonatomic) SCROutputPunctuationSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_countIndentationAsSpacesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofString:(id)a1 inAction:(id)a2;
- (BOOL)_isPosition:(unsigned long long)a0 atStartOfLineUsingContextInAction:(id)a1;
- (BOOL)_isValidZeroIndentationAtPosition:(unsigned long long)a0 inAction:(id)a1;
- (id)initWithSpeechComponent:(id)a0 punctuationSettings:(id)a1;
- (id)parseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofString:(id)a1 inAction:(id)a2;

@end
