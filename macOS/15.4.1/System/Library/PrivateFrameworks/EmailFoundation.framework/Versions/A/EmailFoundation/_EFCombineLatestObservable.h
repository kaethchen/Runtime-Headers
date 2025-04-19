@class NSArray;

@interface _EFCombineLatestObservable : EFObservable

@property (copy, nonatomic) NSArray *observables;

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithObservables:(id)a0;

@end
