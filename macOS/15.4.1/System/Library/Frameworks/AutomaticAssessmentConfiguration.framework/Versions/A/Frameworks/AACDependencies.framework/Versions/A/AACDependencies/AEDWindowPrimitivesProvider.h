@class NSObject;
@protocol OS_dispatch_queue;

@interface AEDWindowPrimitivesProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)makePrimitives;

@end
