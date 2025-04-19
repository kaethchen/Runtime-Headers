@interface CKDAssetCacheEvictionResult : NSObject

@property (readonly, nonatomic) unsigned long long bytesCount;
@property (readonly, nonatomic) unsigned long long purgedBytesCount;
@property (readonly, nonatomic) unsigned long long purgeableBytesCount;
@property (readonly, nonatomic) unsigned long long filesCount;
@property (readonly, nonatomic) unsigned long long purgedFilesCount;
@property (readonly, nonatomic) unsigned long long purgeableFilesCount;

- (id)initWithBytesCount:(unsigned long long)a0 purgedBytesCount:(unsigned long long)a1 purgeableByteCount:(unsigned long long)a2 filesCount:(unsigned long long)a3 purgedFilesCount:(unsigned long long)a4 purgeableFilesCount:(unsigned long long)a5;

@end
