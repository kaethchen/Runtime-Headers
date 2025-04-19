@class NSString, NSDictionary;

@interface AVBindingInfo : NSObject

@property (retain) id observer;
@property (copy) NSString *binding;
@property (weak) id observable;
@property (copy) NSString *keyPath;
@property (copy) NSDictionary *options;
@property BOOL setToNilWhenUnbinding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 binding:(id)a1 observable:(id)a2 keyPath:(id)a3 options:(id)a4 setToNilWhenUnbinding:(BOOL)a5;

@end
