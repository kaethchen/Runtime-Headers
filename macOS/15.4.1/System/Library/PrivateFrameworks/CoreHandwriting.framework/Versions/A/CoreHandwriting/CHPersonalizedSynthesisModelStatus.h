@interface CHPersonalizedSynthesisModelStatus : NSObject <NSSecureCoding> {
    struct map<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>, std::less<CHModelCatalogModelVariant>, std::allocator<std::pair<const CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>>> { struct __tree<std::__value_type<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>, std::__map_value_compare<CHModelCatalogModelVariant, std::__value_type<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>, std::less<CHModelCatalogModelVariant>>, std::allocator<std::__value_type<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<CHModelCatalogModelVariant, std::__value_type<CHModelCatalogModelVariant, std::pair<CHPersonalizedSynthesisModelState, NSString *>>, std::less<CHModelCatalogModelVariant>>> { unsigned long long __value_; } __pair3_; } __tree_; } _modelStates;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)isPersonalizedSynthesisAvailableForLatin;
+ (id)modelStatus;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (long long)getStateForVariant:(long long)a0;
- (id)getVersionForVariant:(long long)a0;
- (id)initFromStates:(id)a0 versions:(id)a1;

@end
