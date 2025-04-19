@interface FI_TPropertyQLPreviewViewExtractor : FI_IPropertyValueExtractor {
    struct vector<TString, std::allocator<TString>> { struct TString *__begin_; struct TString *__end_; struct __compressed_pair<TString *, std::allocator<TString>> { struct TString *__value_; } __end_cap_; } _nodeSuffixes;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)flush;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0 nodes:(const void *)a1;

@end
