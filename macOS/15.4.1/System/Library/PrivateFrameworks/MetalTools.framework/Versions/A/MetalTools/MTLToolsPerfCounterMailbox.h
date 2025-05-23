@interface MTLToolsPerfCounterMailbox : NSObject {
    void *_requester;
    struct vector<std::pair<NSData *, unsigned long>, std::allocator<std::pair<NSData *, unsigned long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<NSData *, unsigned long> *, std::allocator<std::pair<NSData *, unsigned long>>> { void *__value_; } __end_cap_; } _data;
    struct __wrap_iter<std::pair<NSData *, unsigned long> *> { void *__i_; } _iterator;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)extractDataAndNumSamples:(unsigned long long *)a0 forRequester:(void *)a1 isLast:(BOOL *)a2;
- (void)insertData:(id)a0 andNumSamples:(unsigned long long)a1 forRequester:(void *)a2;

@end
