@interface MsgList : NSObject {
    struct __CFArray { } *msgs;
}

- (void)dealloc;
- (id)init;
- (void)add:(id)a0;
- (BOOL)findMatch:(struct receive_wait_s { BOOL x0; id x1; id *x2; id x3; id x4; } *)a0;

@end
