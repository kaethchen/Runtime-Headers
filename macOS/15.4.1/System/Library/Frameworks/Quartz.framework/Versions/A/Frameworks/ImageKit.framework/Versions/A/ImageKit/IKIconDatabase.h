@interface IKIconDatabase : NSObject {
    struct __CFDictionary { } *_iconToIndex;
    struct __CFDictionary { } *_indexToIcon;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)cleanup;
- (void)associateIconRef:(struct OpaqueIconRef { } *)a0 withIndex:(unsigned long long)a1;
- (struct OpaqueIconRef { } *)iconRefForIndex:(unsigned long long)a0;
- (unsigned long long)indexForIconRef:(struct OpaqueIconRef { } *)a0;
- (BOOL)indexHasIconAssociated:(unsigned long long)a0;
- (void)removeIconCacheFromDatabaseIndex:(unsigned long long)a0;

@end
