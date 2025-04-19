@class NSDictionary, NSArray, NSString;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {
    NSDictionary *_queryDict;
    NSArray *_extensionIdentifiers;
    NSArray *_extensionPointIdentifiers;
    id /* block */ _filterBlock;
    struct optional<NSString *> { union { char __null_state_; NSString *__val_; } ; BOOL __engaged_; } _cachedSystemMode;
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _systemModeMutex;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_initWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;
- (id)_queryDictionary;
- (BOOL)matchesPlugin:(unsigned int)a0 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned char x19; unsigned char x20; unsigned int x21; unsigned short x22; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a1 withDatabase:(id)a2;
- (id)systemMode;

@end
