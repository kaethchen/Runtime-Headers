@class NSData;

@interface AFBBufRef : NSObject {
    NSData *_data;
    struct __CFAllocator { } *_cfReleaseBackingDataDeallocator;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) struct __CFAllocator { } *deallocator;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)releaseBuf;
- (void)retainBuf;

@end
