@class AppleVirtualPlatformHostKey, NSMutableArray;

@interface AppleVirtualPlatformHostKeyStorage : NSObject {
    int _fileDescriptor;
    unsigned long long _chipID;
    unsigned long long _ecid;
    unsigned long long _activeSliceIndex;
    struct unique_ptr<AppleVirtualPlatform::AuxiliaryStoragePartition, std::default_delete<AppleVirtualPlatform::AuxiliaryStoragePartition>> { struct __compressed_pair<AppleVirtualPlatform::AuxiliaryStoragePartition *, std::default_delete<AppleVirtualPlatform::AuxiliaryStoragePartition>> { struct AuxiliaryStoragePartition *__value_; } __ptr_; } _partition;
    struct unique_ptr<AppleVirtualPlatform::AuxiliaryStoragePartition, std::default_delete<AppleVirtualPlatform::AuxiliaryStoragePartition>> { struct __compressed_pair<AppleVirtualPlatform::AuxiliaryStoragePartition *, std::default_delete<AppleVirtualPlatform::AuxiliaryStoragePartition>> { struct AuxiliaryStoragePartition *__value_; } __ptr_; } _slice[2];
    NSMutableArray *_hostKeyDatas;
    AppleVirtualPlatformHostKey *_currentHostKey;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)clearHostKeyData:(id *)a0;
- (id)currentHostKeyWithError:(id *)a0;
- (id)initWithAuxiliaryStorageFileDescriptor:(int)a0 partitionOffset:(long long)a1 partitionSize:(long long)a2 chipID:(unsigned long long)a3 ecid:(unsigned long long)a4 error:(id *)a5;

@end
