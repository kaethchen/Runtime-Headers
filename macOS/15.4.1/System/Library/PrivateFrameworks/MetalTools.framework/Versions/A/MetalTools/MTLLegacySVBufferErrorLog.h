@class MTLArgument;
@protocol MTLBuffer;

@interface MTLLegacySVBufferErrorLog : MTLLegacySVGPULog

@property (nonatomic) int addressSpace;
@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) int operation;
@property (retain, nonatomic) MTLArgument *argument;
@property (nonatomic) int specifiedUsage;

- (void)dealloc;
- (id)description;
- (id)init;

@end
