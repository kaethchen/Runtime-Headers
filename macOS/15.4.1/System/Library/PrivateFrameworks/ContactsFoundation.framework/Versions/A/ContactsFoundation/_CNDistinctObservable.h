@class NSMutableSet;
@protocol CNObservable;

@interface _CNDistinctObservable : CNObservable {
    id<CNObservable> _observable;
    NSMutableSet *_previouslyObservedResults;
}

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (BOOL)_resultIsDistinct:(id)a0;
- (id)initWithObservable:(id)a0;

@end
