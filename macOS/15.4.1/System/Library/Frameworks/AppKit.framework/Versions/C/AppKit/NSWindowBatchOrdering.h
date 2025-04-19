@interface NSWindowBatchOrdering : NSObject {
    id /* block */ completionCallback;
    struct NSWindowBatchOrderingTriplet { unsigned int x0; unsigned int x1; long long x2; } *triplets;
    unsigned long long tripletCount;
    unsigned long long tripletCapacity;
}

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)ensureCapacity:(unsigned long long)a0;
- (BOOL)_checkCanOrderWindowIn:(long long)a0;
- (void)addCompletionCallback:(id /* block */)a0;
- (long long)bottomWindowOfAtLeastNormalWindowLevel;
- (unsigned long long)indexOfTripletWithWindow:(long long)a0;
- (void)performBatchOrderingForTripletsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)performRelativeToWindow:(long long)a0;
- (void)scheduleWindow:(long long)a0 forBatchOrdering:(long long)a1 relativeTo:(long long)a2;
- (void)unscheduleWindow:(long long)a0;

@end
