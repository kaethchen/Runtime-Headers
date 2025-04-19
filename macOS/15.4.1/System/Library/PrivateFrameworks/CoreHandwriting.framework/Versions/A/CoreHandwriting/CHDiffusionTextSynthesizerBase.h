@class NSString, NSArray, MLMultiArray;

@interface CHDiffusionTextSynthesizerBase : NSObject <CHSynthesizingText> {
    struct optional<CHCachedStylePrediction> { union { char __null_state_; struct CHCachedStylePrediction { NSArray *transcriptions; NSArray *drawings; MLMultiArray *stylePrediction; } __val_; } ; BOOL __engaged_; } _cachedStylePrediction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelHash;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isLoaded;
- (id)alignAlphaShapes:(id)a0 original:(id)a1 allowAnisotropicScaling:(BOOL)a2;
- (id)refineDrawing:(id)a0 transcription:(id)a1 options:(id)a2 shouldCancel:(id /* block */)a3 error:(id *)a4;
- (id)replaceDrawing:(id)a0 originalTranscription:(id)a1 replacementTranscription:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4 error:(id *)a5;
- (id)rescaleAndShiftSynthesizedDrawing:(id)a0 original:(id)a1;
- (id)runPipeline:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 mode:(int)a3;
- (id)runStyleEmbedding:(id)a0 drawings:(id)a1 shouldCancel:(id /* block */)a2;
- (BOOL)shouldAlignAlphaShapesForOriginalString:(id)a0 replacementString:(id)a1;
- (id)stylePredictionResultForTranscriptions:(id)a0 drawings:(id)a1 shouldCancel:(id /* block */)a2;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;
- (BOOL)useSegmentationForRefine;

@end
