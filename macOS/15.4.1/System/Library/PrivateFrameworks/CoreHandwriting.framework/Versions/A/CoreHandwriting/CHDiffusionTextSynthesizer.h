@interface CHDiffusionTextSynthesizer : CHDiffusionTextSynthesizerBase <CoreHandwriting.CHTextSynthesisChunkable> {
    struct unique_ptr<CoreHandwriting::synthesis::CHDiffusionPipeline, std::default_delete<CoreHandwriting::synthesis::CHDiffusionPipeline>> { struct __compressed_pair<CoreHandwriting::synthesis::CHDiffusionPipeline *, std::default_delete<CoreHandwriting::synthesis::CHDiffusionPipeline>> { struct CHDiffusionPipeline *__value_; } __ptr_; } _pipeline;
}

+ (id)modelHash;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isLoaded;
- (long long)canPredictStyleForTranscription:(id)a0;
- (long long)maximumInputLength;
- (id)runPipeline:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 mode:(int)a3;
- (id)runStyleEmbedding:(id)a0 drawings:(id)a1 shouldCancel:(id /* block */)a2;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)supportedCharacterIndexesWithPreferenceFor:(id)a0;
- (id)supportedCharactersForPersonalizedSynthesis;
- (id)transliterate:(id)a0;
- (BOOL)useSegmentationForRefine;

@end
