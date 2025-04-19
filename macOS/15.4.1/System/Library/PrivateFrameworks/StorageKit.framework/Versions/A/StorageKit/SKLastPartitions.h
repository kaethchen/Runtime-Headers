@class SKDisk;

@interface SKLastPartitions : NSObject

@property (readonly, nonatomic) SKDisk *resizablePart;
@property (readonly, nonatomic) SKDisk *recoveryPart;
@property (readonly, nonatomic) unsigned long long nonResizableSize;

+ (unsigned long long)hfsMinimalSizeForDisk:(id)a0 currentSize:(unsigned long long *)a1;
+ (unsigned long long)secondaryPartitionTableSizeWithDiskType:(id)a0;

- (void).cxx_destruct;
- (id)initWithDisk:(id)a0;

@end
