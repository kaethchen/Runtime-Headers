@class NSMutableData;

@interface ASDTNullStream : ASDTStream

@property (retain, nonatomic) NSMutableData *streamBuffer;
@property (nonatomic) unsigned long long clientPosition;

- (void).cxx_destruct;
- (unsigned int)ioBufferSize;
- (void)startStream;
- (void)stopStream;
- (void)setPhysicalFormat:(id)a0;
- (BOOL)changePhysicalFormat:(id)a0;
- (void)configureStreamBuffer;
- (id /* block */)updateClientPositionBlock;

@end
