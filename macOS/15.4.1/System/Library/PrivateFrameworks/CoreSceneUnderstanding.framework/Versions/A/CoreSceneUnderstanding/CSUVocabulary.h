@class NSString, NSArray;

@interface CSUVocabulary : NSObject {
    NSString *_labelFilePath;
    NSArray *_labels;
    struct vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<NSString *, unsigned long> *, std::allocator<std::pair<NSString *, unsigned long>>> { void *__value_; } __end_cap_; } _visibleLabels;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long internalCount;
@property (readonly, nonatomic) unsigned long long startIndex;
@property (readonly, copy, nonatomic) NSArray *labels;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_enumerateAllLabelsInVocabularyUsingBlock:(id /* block */)a0;
- (void)_enumerateVisibleLabelsAndIndicesInVocabularyUsingBlock:(id /* block */)a0;
- (void)_enumerateVisibleLabelsInVocabularyUsingBlock:(id /* block */)a0;
- (id)initWithName:(id)a0 labelFilePath:(id)a1 internalCount:(unsigned long long)a2 visibleCount:(unsigned long long)a3 startIndex:(unsigned long long)a4;

@end
