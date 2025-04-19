@class NSString, SCROutputPunctuationSettings;

@interface SCROutputSubstitutionWhitespaceParser : NSObject <SCROutputSubstitutionParserProtocol>

@property (readonly, nonatomic) SCROutputPunctuationSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)parseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofString:(id)a1 inAction:(id)a2;

@end
