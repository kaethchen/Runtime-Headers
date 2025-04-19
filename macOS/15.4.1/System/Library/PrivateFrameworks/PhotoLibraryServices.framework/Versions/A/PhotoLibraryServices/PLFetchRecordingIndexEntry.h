@interface PLFetchRecordingIndexEntry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _entryLock;
}

@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) BOOL unavailable;

- (void)lock;
- (void)unlock;
- (id)initWithOffset:(long long)a0;
- (void)entryLocked_markUnavailable;
- (struct PLFetchRecordingFileNormalizedStatementHeader { unsigned char x0; unsigned char x1[32]; double x2; double x3; unsigned int x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned short x15; unsigned char x16; unsigned char x17; } *)entryLocked_statementEntryFomBuffer:(void *)a0;

@end
