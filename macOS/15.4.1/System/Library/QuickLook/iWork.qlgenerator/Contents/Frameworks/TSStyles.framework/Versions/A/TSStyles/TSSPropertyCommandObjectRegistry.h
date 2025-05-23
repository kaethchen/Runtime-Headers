@interface TSSPropertyCommandObjectRegistry : NSObject {
    struct map<int, std::pair<Class, std::string>, std::less<int>, std::allocator<std::pair<const int, std::pair<Class, std::string>>>> { struct __tree<std::__value_type<int, std::pair<Class, std::string>>, std::__map_value_compare<int, std::__value_type<int, std::pair<Class, std::string>>, std::less<int>>, std::allocator<std::__value_type<int, std::pair<Class, std::string>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::pair<Class, std::string>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::pair<Class, std::string>>, std::less<int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _indexToClass;
    struct map<Class, int, std::less<Class>, std::allocator<std::pair<const Class, int>>> { struct __tree<std::__value_type<Class, int>, std::__map_value_compare<Class, std::__value_type<Class, int>, std::less<Class>>, std::allocator<std::__value_type<Class, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<Class, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<Class, std::__value_type<Class, int>, std::less<Class>>> { unsigned long long __value_; } __pair3_; } __tree_; } _classToIndex;
}

@property (class, readonly, nonatomic) TSSPropertyCommandObjectRegistry *sharedRegistry;

+ (void)setIntializationHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)nameForIndex:(int)a0;
- (Class)classForIndex:(int)a0;
- (int)indexForClass:(Class)a0;
- (void)registerClass:(Class)a0 withField:(id)a1;

@end
