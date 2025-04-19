@interface _MDItemWithPath : _MDItem {
    struct __CFString { } *_path;
}

- (oneway void)release;
- (void)dealloc;
- (void)finalize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (id)initWithStoreTag:(unsigned int)a0 oid:(long long)a1 path:(struct __CFString { } *)a2;

@end
