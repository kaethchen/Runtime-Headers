@protocol TSPCryptoInfo;

@interface TSPFileDataStorage : TSPStreamDataStorage

@property (readonly, nonatomic) id<TSPCryptoInfo> decryptionInfo;

- (unsigned long long)encodedLength;
- (BOOL)isReadable;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)AVAssetWithOptions:(id)a0 forData:(id)a1;
- (void)performReadOnBookmarkDataSourceURLWithAccessor:(id /* block */)a0;

@end
