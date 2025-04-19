@class NSMutableArray;

@interface MulticastMessageForwarder : NSObject

@property (retain, nonatomic) NSMutableArray *receivers;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)removeReceiver:(id)a0;
- (void)addReceiver:(id)a0;

@end
