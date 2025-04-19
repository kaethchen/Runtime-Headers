@class NSString;

@interface PTAssetDataBufferFrame : NSObject <PTAssetFrame>

@property (nonatomic) unsigned long long index;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct __CVBuffer { } *dataBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
