@class NSValue, NSNumber;

@interface AVOutputDeviceViewAreaInfo : NSObject

@property (readonly, nonatomic) NSValue *viewArea;
@property (readonly, nonatomic) BOOL transitionControl;
@property (readonly, nonatomic) BOOL supportsFocusTransfer;
@property (readonly, nonatomic) NSNumber *statusBarEdge;
@property (readonly, nonatomic) NSValue *safeArea;

- (void)dealloc;
- (id)initWithViewArea:(id)a0 transitionControl:(BOOL)a1 supportsFocusTransfer:(BOOL)a2 statusBarEdge:(id)a3 safeArea:(id)a4;

@end
