@class PGMemoryMap;

@interface PGMappingTask : NSObject {
    PGMemoryMap *_memoryMap;
}

@property (readonly) void *baseAddress;
@property (readonly) unsigned long long size;

- (void)dealloc;
- (id)initWithSize:(unsigned long long)a0 memoryMap:(id)a1;
- (BOOL)mapMemoryAtVirtualOffset:(unsigned long long)a0 rangeCount:(unsigned int)a1 ranges:(struct PGPhysicalMemoryRange_s { unsigned long long x0; unsigned long long x1; } *)a2 readOnly:(BOOL)a3;
- (BOOL)unmapMemoryAtVirtualOffset:(unsigned long long)a0 length:(unsigned long long)a1;

@end
