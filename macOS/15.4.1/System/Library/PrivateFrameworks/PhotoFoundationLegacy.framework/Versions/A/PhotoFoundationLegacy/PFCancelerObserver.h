@interface PFCancelerObserver : NSObject <PFCancelerObserver> {
    id /* block */ _block;
}

+ (id)observerForCanceler:(id)a0 block:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCanceler:(id)a0 block:(id /* block */)a1;
- (void)cancelerWasCanceled;

@end
