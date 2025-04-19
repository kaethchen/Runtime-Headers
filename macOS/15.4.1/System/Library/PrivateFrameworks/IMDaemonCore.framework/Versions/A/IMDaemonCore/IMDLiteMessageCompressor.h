@class BlastDoorLiteMessageCompressor;

@interface IMDLiteMessageCompressor : NSObject

@property (class, readonly, nonatomic) IMDLiteMessageCompressor *sharedCompressor;

@property (retain, nonatomic) BlastDoorLiteMessageCompressor *compressor;

- (id)init;
- (void).cxx_destruct;
- (id)compressData:(id)a0 codecID:(long long *)a1;

@end
