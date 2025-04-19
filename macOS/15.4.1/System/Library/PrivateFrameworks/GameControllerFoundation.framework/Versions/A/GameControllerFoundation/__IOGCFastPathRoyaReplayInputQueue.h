@class NSDictionary, NSMutableDictionary, __IOGCFastPathRoyaReplayInputQueueEntryStorage;

@interface __IOGCFastPathRoyaReplayInputQueue : __IOGCFastPathInputQueue {
    const struct IOGCFastPathInputQueueInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; unsigned short x4; unsigned short x5; unsigned int x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; } *_IOGCFastPathQueueVTBL;
    const struct IOGCFastPathSampleContainerInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; unsigned short x4; unsigned short x5; unsigned int x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; } *_IOGCFastPathSampleContainerVTBL;
    unsigned long long _bufferCapacity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
    NSDictionary *_options;
    NSMutableDictionary *_propertyTable;
    unsigned int _channel;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mutationLock;
    _Atomic unsigned short _workingGeneration;
    _Atomic unsigned short _comittedGeneration;
    _Atomic unsigned long long _startingPosition;
    _Atomic unsigned long long _latestPosition;
    struct __IOGCFastPathRoyaReplayInputQueueEntry { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; __IOGCFastPathRoyaReplayInputQueueEntryStorage *comittedStorage; __IOGCFastPathRoyaReplayInputQueueEntryStorage *workingStorage; } _buffer[1];
}

- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;

@end
