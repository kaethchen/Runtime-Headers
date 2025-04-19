@protocol VZVirtioSocketListenerDelegate;

@interface VZVirtioSocketListener : NSObject

@property (weak) id<VZVirtioSocketListenerDelegate> delegate;

- (void).cxx_destruct;

@end
