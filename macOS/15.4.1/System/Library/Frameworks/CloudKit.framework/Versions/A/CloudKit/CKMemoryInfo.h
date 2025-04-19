@class NSObject;
@protocol OS_dispatch_source;

@interface CKMemoryInfo : NSObject

@property (class, readonly) CKMemoryInfo *memoryInfo;

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *source;
@property (readonly) long long memoryPressure;

+ (id)workloop;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleMemoryPressureEvent:(unsigned long long)a0;

@end
