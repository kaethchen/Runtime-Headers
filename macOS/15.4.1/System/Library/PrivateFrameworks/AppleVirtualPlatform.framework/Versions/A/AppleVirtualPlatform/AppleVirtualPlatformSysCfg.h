@interface AppleVirtualPlatformSysCfg : NSObject <NSCopying> {
    struct shared_ptr<AppleVirtualPlatform::SysCfg> { struct SysCfg *__ptr_; struct __shared_weak_count *__cntrl_; } _syscfg;
}

@property (readonly) unsigned int maxSize;
@property (readonly) unsigned int usedSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)setMaxSize:(unsigned int)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithMaxSize:(unsigned int)a0;
- (id)initWithAuxiliaryStorageFileDescriptor:(int)a0 partitionOffset:(long long)a1 partitionSize:(long long)a2 error:(id *)a3;
- (BOOL)removeValueForSysCfgTag:(unsigned int)a0 error:(id *)a1;
- (BOOL)setJumboValue:(id)a0 forSysCfgTag:(unsigned int)a1 error:(id *)a2;
- (BOOL)setValue:(id)a0 forSysCfgTag:(unsigned int)a1 error:(id *)a2;

@end
