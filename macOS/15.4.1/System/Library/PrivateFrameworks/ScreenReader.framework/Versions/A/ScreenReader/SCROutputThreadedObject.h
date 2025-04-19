@class SCRCThreadKey;

@interface SCROutputThreadedObject : NSObject

@property (retain, nonatomic) SCRCThreadKey *threadKey;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)enqueueEvent:(id)a0;
- (void)handleEvent:(id)a0;
- (void)processNotification:(id)a0;

@end
