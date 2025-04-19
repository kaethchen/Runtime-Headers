@class NSObject;
@protocol OS_dispatch_queue;

@interface PAImageCacheEntrySharedValid : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL valid;

- (id)init;
- (void).cxx_destruct;

@end
