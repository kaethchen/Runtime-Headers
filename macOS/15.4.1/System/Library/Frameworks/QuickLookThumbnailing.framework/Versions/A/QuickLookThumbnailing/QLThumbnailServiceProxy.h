@class NSObject, NSXPCConnection;
@protocol QLThumbnailsInterface, QLThumbnailAdditionIndexInterface;

@interface QLThumbnailServiceProxy : NSObject {
    NSObject<QLThumbnailsInterface> *_proxy;
    NSObject<QLThumbnailAdditionIndexInterface> *_indexProxy;
}

@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)sharedInstance;
+ (id)interface;
+ (id)sharedInstanceWithError:(id *)a0;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithError:(id *)a0;
- (void)askThumbnailAdditionIndex:(id /* block */)a0;
- (id)indexProxy;
- (void)touchOrAddThumbnailAddition:(id)a0 forURL:(id)a1;
- (void)updateLastHitDateOfAddition:(id)a0 onPhysicalURL:(id)a1;

@end
