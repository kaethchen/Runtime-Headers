@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface MTLSimOperation : NSObject <MTLSerializerAllocator>

@property (readonly) NSObject<OS_dispatch_data> *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char *)allocateOperationBytes:(unsigned long long)a0;

@end
