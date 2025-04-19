@class __end_cap_, __end_;

@interface VBUnretainedMap : NSObject <NSFastEnumeration> {
    unsigned long long _mutations;
    struct vector<id<NSObject>, std::allocator<id<NSObject>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<id<NSObject> *, std::allocator<id<NSObject>>> { id *__value_; } x1; } _fastEnumeration;
    struct __CFDictionary { } *_dictionary;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id).cxx_construct;

@end
