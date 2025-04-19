@protocol NSKVOForwarding;

@interface NSKVOForwarder : NSObject

@property id<NSKVOForwarding> observer;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObserver:(id)a0;

@end
