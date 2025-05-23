@class CNObservable;
@protocol CNSchedulerProvider;

@interface _CNFlatMapObservable : CNObservable

@property (readonly) CNObservable *observable;
@property (readonly, copy) id /* block */ decoratorGenerator;
@property (readonly) id<CNSchedulerProvider> schedulerProvider;

+ (id)concatMapWithObservable:(id)a0 transform:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)flatMapWithObservable:(id)a0 transform:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)observableWithObservable:(id)a0 transform:(id /* block */)a1 decoratorGenerator:(id /* block */)a2 schedulerProvider:(id)a3;

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0 transform:(id /* block */)a1 decoratorGenerator:(id /* block */)a2 schedulerProvider:(id)a3;
- (id)subscribeInnerObservable:(id)a0 observer:(id)a1 context:(id)a2;

@end
