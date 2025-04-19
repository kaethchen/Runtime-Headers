@class AXFDispatchQueue;
@protocol _AXFEventProviderDelegate;

@interface _AXFEventProvider : NSObject

@property (readonly, weak) id<_AXFEventProviderDelegate> delegate;
@property (readonly) AXFDispatchQueue *delegateQueue;

+ (id)newSystemEventProviderWithDelegate:(id)a0 delegateQueue:(id)a1;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;

@end
