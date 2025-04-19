@interface IMKQueuedEventRef_Legacy : NSObject {
    struct OpaqueEventRef { } *_eventRef;
}

- (void)dealloc;
- (struct OpaqueEventRef { } *)eventRef;
- (id)initWithEventRef:(struct OpaqueEventRef { } *)a0;

@end
