@class AMSCircularBuffer;

@interface AMSStreamHTTPArchiveEntryController : NSObject

@property (class, readonly) AMSCircularBuffer *buffer;

+ (void)initialize;
+ (id)_createNewFileNameForCombining:(BOOL)a0 extension:(id)a1;
+ (id)_createNewFileWithFileName:(id)a0 outputDirectory:(id)a1 error:(id *)a2;
+ (id)_footerData;
+ (id)_harFileURLsInPath:(id)a0;
+ (id)_headerData;
+ (void)_moveTemporaryFileURL:(id)a0 toFinalFileURL:(id)a1;
+ (void)_performCombiningFiles:(id)a0 toStream:(id)a1;
+ (void)_periodicCleanup;
+ (BOOL)_shouldWriteEntryDirectlyToDiskForURLString:(id)a0;
+ (void)_streamToDiskWithEntries:(id)a0;
+ (void)_updateMaxBufferSize;
+ (BOOL)_writeData:(id)a0 enumeratingBytesToStream:(id)a1;
+ (void)_writeEntries:(id)a0 toStream:(id)a1;
+ (BOOL)_writeFooterToStream:(id)a0;
+ (BOOL)_writeHeaderToStream:(id)a0;
+ (void)ams_addEntriesForTaskInfo:(id)a0;
+ (id)ams_combineEntriesForPath:(id)a0 error:(id *)a1;
+ (void)ams_streamEntriesToDisk;

@end
