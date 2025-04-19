@protocol AXEEventTapListener;

@interface _AXEEventTapListenerWrapper : NSObject

@property (weak, nonatomic) id<AXEEventTapListener> listener;
@property unsigned long long eventMask;

- (void).cxx_destruct;
- (id)initWithListener:(id)a0 eventMask:(unsigned long long)a1;

@end
