@class NSString, NSMutableData, NSObject, StreamingFileWriterQueueReservation;
@protocol OS_dispatch_group, StreamingFileWriterErrorDelegate;

@interface AsyncStreamingFileWriter : StreamingFileWriter <StreamingFileWriterQueueAsyncOperation>

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *trackingGroup;
@property (readonly, nonatomic) StreamingFileWriterQueueReservation *reservation;
@property (readonly, nonatomic) int oflag;
@property (readonly, nonatomic) unsigned short omode;
@property (readonly, nonatomic) BOOL performCachedWrites;
@property (readonly, nonatomic) struct _qtn_file { } *quarantineInfo;
@property (retain, nonatomic) NSMutableData *fileData;
@property (nonatomic) BOOL setOwnership;
@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int gid;
@property (nonatomic) struct timeval { long long tv_sec; int tv_usec; } accessTime;
@property (nonatomic) struct timeval { long long tv_sec; int tv_usec; } modTime;
@property (nonatomic) unsigned short mode;
@property (nonatomic) unsigned long long executeFileOperationFlags;
@property (weak, nonatomic) id<StreamingFileWriterErrorDelegate> errorDelegate;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_executeWithError:(id *)a0;
- (id)_initForWritingToPath:(id)a0 withOpenFlags:(int)a1 mode:(unsigned short)a2 quarantineInfo:(struct _qtn_file { } *)a3 performCachedWrites:(BOOL)a4 expectedSize:(long long)a5 asyncTrackingGroup:(id)a6 errorDelegate:(id)a7 reservation:(id)a8 error:(id *)a9;
- (BOOL)_openCurrentOutputFDForPath:(id)a0 withOpenFlags:(int)a1 mode:(unsigned short)a2 performCachedWrites:(BOOL)a3 quarantineInfo:(struct _qtn_file { } *)a4 error:(id *)a5;
- (void)closeCurrentOutputFD;
- (void)configureFileAndSetOwnership:(BOOL)a0 toUID:(unsigned int)a1 GID:(unsigned int)a2;
- (long long)currentOffsetWithError:(id *)a0;
- (void)executeAsyncOperation;
- (BOOL)finalizeFileWithAccessTime:(struct timeval { long long x0; int x1; })a0 modTime:(struct timeval { long long x0; int x1; })a1 mode:(unsigned short)a2 error:(id *)a3;
- (long long)readIntoBuffer:(void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setCurrentOffset:(long long)a0 error:(id *)a1;
- (void)setIncompleteExtractionAttribute;
- (BOOL)suspendWithError:(id *)a0;
- (BOOL)writeBuffer:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;

@end
