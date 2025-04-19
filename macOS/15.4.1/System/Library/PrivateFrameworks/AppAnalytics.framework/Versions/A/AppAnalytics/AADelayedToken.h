@interface AADelayedToken : NSObject {
    void /* unknown type, empty encoding */ block;
    void /* unknown type, empty encoding */ sealed;
}

- (id)init;
- (void).cxx_destruct;
- (void)commit;

@end
