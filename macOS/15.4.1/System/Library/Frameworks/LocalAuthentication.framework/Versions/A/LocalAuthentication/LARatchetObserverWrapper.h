@class NSString;
@protocol LARatchetObserver;

@interface LARatchetObserverWrapper : NSObject <LACDTORatchetObserver>

@property (weak) id<LARatchetObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)ratchetStateDidChange:(id)a0;

@end
