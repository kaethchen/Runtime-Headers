@class NSNumber;

@interface SKRecoveryMoverInfo : NSObject

@property (nonatomic) unsigned long long srcOffset;
@property (nonatomic) unsigned long long dstOffset;
@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) NSNumber *partitionID;

- (void).cxx_destruct;
- (id)initWithSrcOffset:(unsigned long long)a0 dstOffset:(unsigned long long)a1 length:(unsigned long long)a2 partitionID:(id)a3;

@end
