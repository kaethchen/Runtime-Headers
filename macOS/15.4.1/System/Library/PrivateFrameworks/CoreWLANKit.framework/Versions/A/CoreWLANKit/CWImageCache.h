@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CWImageCache : NSObject {
    NSMutableDictionary *_imageCache;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedImageCache;

- (void)dealloc;
- (id)init;
- (void)clearCache;
- (id)imageNamed:(id)a0;
- (id)__imageNamed:(id)a0;

@end
