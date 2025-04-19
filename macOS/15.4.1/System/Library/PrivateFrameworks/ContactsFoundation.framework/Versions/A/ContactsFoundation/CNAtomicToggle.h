@interface CNAtomicToggle : NSObject {
    _Atomic BOOL _state;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithState:(BOOL)a0;
- (BOOL)trySetState:(BOOL)a0;

@end
