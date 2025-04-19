@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DefaultObjectRefAllocator : NSObject <MTLSerializerObjectRefAllocator> {
    void *_generator;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
