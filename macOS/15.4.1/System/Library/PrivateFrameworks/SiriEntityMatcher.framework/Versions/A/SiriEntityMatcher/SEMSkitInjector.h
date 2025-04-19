@class NSString, SEMTokenizer;

@interface SEMSkitInjector : NSObject <SEMSkitReadAccess, SEMSkitAccessProvider> {
    SEMTokenizer *_tokenizer;
    struct Indexer { struct ContextV2 { struct shared_ptr<skit::internal::ContextImpl> { struct ContextImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } context; struct IndexWriter { struct unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>> { struct __compressed_pair<skit::internal::IndexWriterImpl *, std::default_delete<skit::internal::IndexWriterImpl>> { struct IndexWriterImpl *__value_; } __ptr_; } pimpl; } index_writer; long long index_locale; struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> { struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> { union __rep { struct __short { unsigned short __data_[11]; unsigned char __padding_[1]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { unsigned short *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } index_locale_id; struct shared_ptr<semskitbridge::Tokenizer> { struct Tokenizer *__ptr_; struct __shared_weak_count *__cntrl_; } tokenizer; struct shared_ptr<semskitbridge::Analyzer> { struct Analyzer *__ptr_; struct __shared_weak_count *__cntrl_; } analyzer; struct Alias { struct shared_ptr<skit::internal::AliasImpl> { struct AliasImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } alias; struct TrialFactors { BOOL use_contact_aliases; BOOL use_contact_emoji_matches; BOOL use_contact_diacritics_stripping; BOOL use_contact_prefix_matching; BOOL use_contact_phonetic_search; BOOL use_token_lemmatization; int phonetic_search_n_gram_order; BOOL use_media_threshold_filtering; } trial_factors; unsigned short index_features; } _indexer;
    struct Searcher { struct ContextV2 { struct shared_ptr<skit::internal::ContextImpl> { struct ContextImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } context; struct IndexReader { struct shared_ptr<skit::internal::IndexReaderImpl> { struct IndexReaderImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } index_reader; struct Alias { struct shared_ptr<skit::internal::AliasImpl> { struct AliasImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } alias; } _searcher;
    struct vector<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>> *, std::allocator<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>>>> { void *__value_; } __end_cap_; } _documents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id).cxx_construct;
- (void)prewarm;
- (id)matchSpans:(id)a0 error:(id *)a1;
- (BOOL)_analyzeCascadeEntity:(id)a0 outSearchGroup:(unsigned short *)a1 indexTokens:(void *)a2 builder:(void *)a3 error:(id *)a4;
- (BOOL)_buildDocumentsFromEntities:(id)a0 error:(id *)a1;
- (id)accessDescription;
- (id)indexLocale;
- (id)initWithTokenizer:(id)a0 error:(id *)a1;
- (BOOL)setEntityPool:(id)a0 error:(id *)a1;
- (id)skitReadAccessWithIndexSiteType:(unsigned char)a0;
- (BOOL)supportsIndexSiteType:(unsigned char)a0;

@end
