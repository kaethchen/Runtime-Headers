@interface CRFormContentTypePredictor : NSObject {
    struct unique_ptr<CoreRecognition::EspressoModelWrapper, std::default_delete<CoreRecognition::EspressoModelWrapper>> { struct __compressed_pair<CoreRecognition::EspressoModelWrapper *, std::default_delete<CoreRecognition::EspressoModelWrapper>> { struct EspressoModelWrapper *__value_; } __ptr_; } _espressoModel;
    struct map<std::string, float, std::less<std::string>, std::allocator<std::pair<const std::string, float>>> { struct __tree<std::__value_type<std::string, float>, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>>, std::allocator<std::__value_type<std::string, float>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } _customNoneBonuses;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_decodeCoreMLOutput:(id)a0 forFields:(id)a1 updateExternal:(BOOL)a2;
- (void)_decodeEspressoOutput:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 forFields:(id)a1 locale:(id)a2 updateExternal:(BOOL)a3;
- (id)_modelInputWithFields:(id)a0 fieldsAndRegions:(id)a1 locale:(id)a2;
- (BOOL)_predictAndAssignContentTypesForFields:(id)a0 fieldsAndRegions:(id)a1 locale:(id)a2 updateExternal:(BOOL)a3;
- (BOOL)predictAndAssignContentTypesForFields:(id)a0 fieldsAndRegions:(id)a1 locale:(id)a2 updateExternal:(BOOL)a3;

@end
