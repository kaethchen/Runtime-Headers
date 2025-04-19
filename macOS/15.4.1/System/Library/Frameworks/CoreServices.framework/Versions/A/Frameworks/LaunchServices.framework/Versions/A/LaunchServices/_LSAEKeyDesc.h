@interface _LSAEKeyDesc : NSObject <NSSecureCoding> {
    struct AEKeyDesc { unsigned int descKey; struct AEDesc { unsigned int descriptorType; struct OpaqueAEDataStorageType **dataHandle; } descContent; } _keyDesc;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const struct AEKeyDesc { unsigned int x0; struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } x1; } *aeKeyDesc;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (const struct AEKeyDesc { unsigned int x0; struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } x1; } *)aeKeyDesc;
- (id)initWithAEKeyDesc:(const struct AEKeyDesc { unsigned int x0; struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } x1; } *)a0;
- (id)initWithKeyword:(unsigned int)a0 aeDesc:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1;
- (id)initWithKeyword:(unsigned int)a0 descriptor:(id)a1;

@end
