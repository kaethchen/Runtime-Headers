@class NSMutableData;

@interface CKDSWritableStorage : CKDSStorage

@property (readonly, nonatomic) NSMutableData *data;

- (id)initWithFileURL:(id)a0;
- (id)initInMemory;
- (id)initWithTemporaryFile:(id *)a0;
- (id)readableStorage;

@end
