@interface __IOGCFastPathRoyaReplayInputQueueEntryStorage : NSObject {
    unsigned long long entryGeneration;
    unsigned short queueGeneration;
    unsigned short fieldsCount;
    unsigned int flags;
    unsigned long long sequenceID;
    struct __IOGCFastPathRoyaReplayInputQueueEntryBufferField { unsigned long long entryGeneration; unsigned int name; unsigned int type; union { struct { unsigned int domain; unsigned int options; unsigned long long timestamp; unsigned long long uncertainty; } timestamp; struct { unsigned int options; long long value[1]; } integer1; struct { unsigned int options; long long value[2]; } integer2; struct { unsigned int options; long long value[3]; } integer3; struct { unsigned int options; double value[1]; } double1; struct { unsigned int options; double value[2]; } double2; struct { unsigned int options; double value[3]; } double3; } ; } fields[0];
}

@end
