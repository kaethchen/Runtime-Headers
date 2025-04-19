@class NSObject;
@protocol OS_dispatch_data;

@interface MTLSimReplyAllocator : NSObject <MTLDeserializerAllocator>

@property (readonly) NSObject<OS_dispatch_data> *data;

- (void)dealloc;
- (char *)allocateOperationBytes:(unsigned long long)a0;

@end
