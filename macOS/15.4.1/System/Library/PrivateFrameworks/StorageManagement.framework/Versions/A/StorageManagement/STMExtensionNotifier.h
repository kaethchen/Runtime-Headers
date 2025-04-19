@class NSObject;
@protocol OS_dispatch_queue, STMExtensionNotifierDelegate;

@interface STMExtensionNotifier : NSObject

@property (retain) NSObject<OS_dispatch_queue> *serialAccessQueue;
@property (retain) id matchingContext;
@property (weak) id<STMExtensionNotifierDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)handleError:(id)a0;
- (void)beginMatchingExtensions;
- (id)extensionMatchingAtrributes;
- (void)handleMatchingExtensions:(id)a0;
- (void)handleMatchingResponse:(id)a0 error:(id)a1;
- (void)stopMatchingExtensions;

@end
