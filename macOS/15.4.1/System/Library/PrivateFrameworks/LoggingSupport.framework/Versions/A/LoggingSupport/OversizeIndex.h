@interface OversizeIndex : NSObject

@property (nonatomic) unsigned short fileIndex;
@property (nonatomic) long long chunk_offset;
@property (nonatomic) long long tp_offset;
@property (nonatomic) long long catalog_offset;
@property (nonatomic) unsigned long long processID;
@property (nonatomic) unsigned int pidversion;
@property (nonatomic) unsigned int msgID;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)hash64;
- (long long)compareTimestamp:(id)a0;
- (id)init:(unsigned long long)a0 msgID:(unsigned int)a1 pidV:(unsigned int)a2 timestamp:(unsigned long long)a3;

@end
