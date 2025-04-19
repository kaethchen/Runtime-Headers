@class NSString, CNObservable;

@interface CNAutocompleteObservable : CNObservable

@property (retain, nonatomic) CNObservable *observable;
@property (retain, nonatomic) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)subscribe:(id)a0;

@end
