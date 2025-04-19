@class handler, GCHIDEventSystemClient;

@interface __GCHIDSystemObservation : NSObject {
    unsigned char _type;
    _Atomic BOOL _invalid;
    BOOL _observerIsBlock;
    union { handler *object; id /* block */ x0; } _observer;
    GCHIDEventSystemClient *_client;
    struct { __GCHIDSystemObservation *tqe_next; id *tqe_prev; } _listEntry;
}

- (void)dealloc;
- (id)init;

@end
