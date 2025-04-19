@class NSArray, NSString;

@interface NLE5Embedding : NSObject <NLE5Embedding, NLLogging> {
    int _numInputs;
    void *_subwordVocabRef;
    struct unique_ptr<E5RT::ProgramLibrary, std::default_delete<E5RT::ProgramLibrary>> { struct __compressed_pair<E5RT::ProgramLibrary *, std::default_delete<E5RT::ProgramLibrary>> { struct ProgramLibrary *__value_; } __ptr_; } _programLibrary;
    struct unique_ptr<E5RT::ExecutionStream, std::default_delete<E5RT::ExecutionStream>> { struct __compressed_pair<E5RT::ExecutionStream *, std::default_delete<E5RT::ExecutionStream>> { struct ExecutionStream *__value_; } __ptr_; } _stream;
    struct shared_ptr<E5RT::ExecutionStreamOperation> { struct ExecutionStreamOperation *__ptr_; struct __shared_weak_count *__cntrl_; } _main_esop;
    struct unordered_map<std::string, std::shared_ptr<E5RT::BufferObject>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::BufferObject>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::BufferObject>>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } _buffers;
    NSString *_loadedFunction;
}

@property (retain) NSArray *adapters;
@property (readonly) unsigned long long dimension;
@property (readonly) unsigned long long maximumSequenceLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)compileEmbeddingModelWithModelPath:(id)a0 useANE:(BOOL)a1 adapters:(id)a2;
+ (id)embeddingModelWithModelPath:(id)a0 useANE:(BOOL)a1 adapters:(id)a2;
+ (BOOL)isCompiledEmbeddingModelWithModelPath:(id)a0 useANE:(BOOL)a1 adapters:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_embeddingDataForString:(id)a0 sequenceSize:(unsigned long long *)a1 error:(id *)a2;
- (id)_embeddingDataForTokenizedBatch:(id)a0 withOutputProperties:(id)a1;
- (BOOL)_loadFunction:(const char *)a0;
- (void)_setInputFragments:(int *)a0 count:(unsigned long long)a1;
- (id)_tokenIDsForText:(id)a0 addBOS:(BOOL)a1;
- (id)embeddingDataForString:(id)a0 sequenceSize:(unsigned long long *)a1 error:(id *)a2;
- (id)embeddingDataForTokenizedBatch:(id)a0 withOutputProperties:(id)a1;
- (id)initWithProgramLibrary:(struct unique_ptr<E5RT::ProgramLibrary, std::default_delete<E5RT::ProgramLibrary>> { struct __compressed_pair<E5RT::ProgramLibrary *, std::default_delete<E5RT::ProgramLibrary>> { struct ProgramLibrary *x0; } x0; })a0 andSubwordVocab:(void *)a1;
- (BOOL)isAdapterLoaded:(id)a0;
- (BOOL)isBackboneLoaded;
- (BOOL)loadAdapter:(id)a0;
- (BOOL)loadBackbone;
- (id)textForTokenIDs:(id)a0;
- (id)tokenIDsForText:(id)a0;

@end
