@class NSMutableArray;

@interface PGMemoryMap : NSObject <NSSecureCoding, NSCopying> {
    struct vector<PGMemoryMapRange_t, std::allocator<PGMemoryMapRange_t>> { struct *__begin_; struct *__end_; struct __compressed_pair<PGMemoryMapRange_t *, std::allocator<PGMemoryMapRange_t>> { struct *__value_; } __end_cap_; } _ranges;
    NSMutableArray *_segments;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithDescriptor:(id)a0;
- (BOOL)mapMemoryAtVirtualAddress:(void *)a0 ranges:(struct PGPhysicalMemoryRange_s { unsigned long long x0; unsigned long long x1; } *)a1 rangeCount:(unsigned int)a2 readOnly:(BOOL)a3;
- (id)newContiguousMapping:(unsigned long long)a0 length:(unsigned long long)a1 readOnly:(unsigned int)a2;
- (id)newRangeMapping:(struct PGPhysicalMemoryRange_s { unsigned long long x0; unsigned long long x1; } *)a0 rangeCount:(unsigned int)a1 totalLength:(unsigned long long)a2 readOnly:(unsigned int)a3;
- (BOOL)read:(unsigned long long)a0 length:(unsigned long long)a1 dst:(void *)a2;
- (void *)virtualAddressForPhysical:(unsigned long long)a0 length:(unsigned long long)a1;
- (BOOL)write:(unsigned long long)a0 length:(unsigned long long)a1 src:(const void *)a2;

@end
