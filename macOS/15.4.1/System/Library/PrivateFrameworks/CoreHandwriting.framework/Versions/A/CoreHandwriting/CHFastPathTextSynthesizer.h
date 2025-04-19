@class NSString;

@interface CHFastPathTextSynthesizer : NSObject <CoreHandwriting.CHTextSynthesisChunkable, CHSynthesizingText> {
    struct CHFastPathCharacterInventory { struct vector<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder>, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder> *, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder>>> { void *__value_; } __end_cap_; } _holders; struct vector<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension>, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension> *, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension>>> { void *__value_; } __end_cap_; } _extensions; } _inventory;
    struct unique_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathStitchingStrategy, std::default_delete<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathStitchingStrategy>> { struct __compressed_pair<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathStitchingStrategy *, std::default_delete<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathStitchingStrategy>> { struct CHAbstractFastPathStitchingStrategy *__value_; } __ptr_; } _stitchingStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)generateDrawingForText:(id)a0 options:(id)a1;
- (id)initWithStyleInventory:(id)a0;
- (long long)maximumInputLength;
- (id)refineDrawing:(id)a0 transcription:(id)a1 options:(id)a2 shouldCancel:(id /* block */)a3 error:(id *)a4;
- (id)replaceDrawing:(id)a0 originalTranscription:(id)a1 replacementTranscription:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4 error:(id *)a5;
- (BOOL)shouldUsePersonalization;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)supportedCharacterIndexesWithPreferenceFor:(id)a0;
- (id)supportedCharacters;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;
- (id)transliterate:(id)a0;

@end
