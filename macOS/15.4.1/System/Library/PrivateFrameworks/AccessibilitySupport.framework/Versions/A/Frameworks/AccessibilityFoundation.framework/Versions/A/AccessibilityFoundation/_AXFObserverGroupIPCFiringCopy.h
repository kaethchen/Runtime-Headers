@class NSArray;

@interface _AXFObserverGroupIPCFiringCopy : _AXFObserverGroupIPC

@property (copy, nonatomic) NSArray *observersForFiring;

- (void).cxx_destruct;
- (void)setObserver:(struct __AXObserver { } *)a0;
- (BOOL)addObserver:(id)a0 selector:(SEL)a1 queue:(id)a2;
- (void)fireWithElement:(id)a0 userInfo:(id)a1;
- (id)initWithName:(id)a0 element:(id)a1 application:(id)a2;
- (BOOL)isObserving:(id)a0 element:(id)a1;
- (BOOL)registerObserver;
- (BOOL)removeObserver:(id)a0 selector:(SEL)a1;

@end
