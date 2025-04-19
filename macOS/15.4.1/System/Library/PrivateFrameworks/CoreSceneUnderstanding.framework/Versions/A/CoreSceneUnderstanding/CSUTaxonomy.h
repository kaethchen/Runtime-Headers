@class NSString, NSArray, NSData, NSDictionary;

@interface CSUTaxonomy : NSObject {
    NSDictionary *_manifest;
    NSDictionary *_labelAttributes;
    NSDictionary *_vocabularies;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) unsigned long long internalCount;
@property (readonly, nonatomic) struct optional<csu::TaxonomyRelations> { union { char __null_state_; struct TaxonomyRelations { NSData *_data; unsigned long long _count; } __val_; } ; BOOL __engaged_; } relations;
@property (readonly, copy, nonatomic) NSArray *vocabularyNames;
@property (readonly, nonatomic) BOOL hasLabelAttributes;

+ (id)taxonomyWithManifestPath:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enumerateLabelsInVocabularyNamed:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_hasVocabularyNamed:(id)a0;
- (id)_vocabularyNamed:(id)a0;
- (unsigned long long)countLabelsInVocabularyNamed:(id)a0;
- (void)enumerateLabelsInTaxonomyUsingBlock:(id /* block */)a0;
- (id)initWithManifestPath:(id)a0 error:(id *)a1;

@end
