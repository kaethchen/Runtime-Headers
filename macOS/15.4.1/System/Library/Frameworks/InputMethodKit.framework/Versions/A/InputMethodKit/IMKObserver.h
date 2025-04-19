@class NSString, NSOperationQueue, NSObject;

@interface IMKObserver : NSObject

@property (weak) NSObject *observedObject;
@property (readonly, copy, nonatomic) id /* block */ observerBlock;
@property (readonly, copy, nonatomic) NSString *observedKeyPath;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) BOOL isObserving;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)endObservation;
- (id)initWithObservedObject:(id)a0 observedKeyPath:(id)a1 queue:(id)a2 observerBlock:(id /* block */)a3;

@end
