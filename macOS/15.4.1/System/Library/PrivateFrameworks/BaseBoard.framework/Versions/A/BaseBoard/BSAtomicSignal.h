@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (id)description;
- (id)init;
- (BOOL)signal;
- (BOOL)hasBeenSignalled;

@end
