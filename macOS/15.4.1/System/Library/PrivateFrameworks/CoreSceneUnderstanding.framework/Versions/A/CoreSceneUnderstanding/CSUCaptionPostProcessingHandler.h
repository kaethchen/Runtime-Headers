@class CSUCaptionRuntimeParameters, NSCharacterSet;

@interface CSUCaptionPostProcessingHandler : NSObject

@property (readonly) NSCharacterSet *trimSet;
@property (readonly, weak) CSUCaptionRuntimeParameters *runtimeParameters;

- (void).cxx_destruct;
- (id)_checkForBlockingTokens:(id)a0 blockingTokens:(id)a1;
- (id)_excludeGenderReplacements:(id)a0 genderOption:(int)a1 error:(id *)a2;
- (id)_excludeGenderTriggers:(id)a0 genderOption:(int)a1 error:(id *)a2;
- (id)_replacements:(id)a0 genderOption:(int)a1;
- (id)postProcessCaptions:(id)a0 genderOption:(int)a1 error:(id *)a2;
- (id)initWithRuntimeParameters:(id)a0;
- (id)postProcessResults:(id)a0 genderOption:(int)a1 error:(id *)a2;

@end
