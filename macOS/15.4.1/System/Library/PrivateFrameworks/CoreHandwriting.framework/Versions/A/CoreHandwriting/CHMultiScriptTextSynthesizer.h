@class CHFastPathTextSynthesizer, NSString, CHDiffusionTextSynthesizer, CHSynthesisStyleInventory;

@interface CHMultiScriptTextSynthesizer : NSObject <CHSynthesizingText> {
    CHDiffusionTextSynthesizer *_diffusionSynthesizerLatn;
    CHFastPathTextSynthesizer *_fastPathSynthesizer;
    CHSynthesisStyleInventory *_styleInventory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffusionModelHash;

- (id)init;
- (void).cxx_destruct;
- (id)availableDiffusionSynthesizers;
- (long long)canPredictStyleForTranscription:(id)a0;
- (id)initWithStyleInventory:(id)a0;
- (id)refineDrawing:(id)a0 transcription:(id)a1 options:(id)a2 shouldCancel:(id /* block */)a3 error:(id *)a4;
- (id)replaceDrawing:(id)a0 originalTranscription:(id)a1 replacementTranscription:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4 error:(id *)a5;
- (id)stylePredictionResultForTranscriptions:(id)a0 drawings:(id)a1 shouldCancel:(id /* block */)a2;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)supportedCharactersForPersonalizedSynthesis;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;

@end
