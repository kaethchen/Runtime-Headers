@interface DiskPartition : NSObject

+ (int)writeDiskBlock0:(id)a0;
+ (int)writeDiskHeader:(id)a0 writeFormatSelfFlag:(BOOL)a1 atOffset:(unsigned long long)a2;
+ (int)writeHFSBlock0:(id)a0 atOffset:(unsigned long long)a1;
+ (int)writeHFSPartitionMap:(id)a0 atOffset:(unsigned long long)a1;

@end
