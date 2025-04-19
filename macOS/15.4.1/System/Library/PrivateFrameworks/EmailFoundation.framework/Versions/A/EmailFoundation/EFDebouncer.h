@class NSString, EFObservable;
@protocol EFCancelable, EFObserver;

@interface EFDebouncer : NSObject <EFCancelable>

@property (readonly, nonatomic) EFObservable<EFObserver> *observable;
@property (readonly, nonatomic) id<EFCancelable> cancelable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)debounceResult:(id)a0;
- (id)initWithTimeInterval:(double)a0 scheduler:(id)a1 startAfter:(unsigned long long)a2 block:(id /* block */)a3;

@end
