@protocol LNListenerEndpointProviderDelegate;

@interface LNListenerEndpointProvider : NSObject

@property (weak, nonatomic) id<LNListenerEndpointProviderDelegate> delegate;

+ (id)sharedProvider;

- (void).cxx_destruct;

@end
