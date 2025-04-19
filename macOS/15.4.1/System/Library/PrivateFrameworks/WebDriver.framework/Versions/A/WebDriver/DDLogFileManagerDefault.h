@class NSString;

@interface DDLogFileManagerDefault : NSObject <DDLogFileManager> {
    NSString *_logsDirectory;
}

@property unsigned long long maximumNumberOfLogFiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)createNewLogFile;
- (id)defaultLogsDirectory;
- (void)deleteOldLogFiles;
- (id)generateShortUUID;
- (id)initWithLogsDirectory:(id)a0;
- (BOOL)isLogFile:(id)a0;
- (id)logsDirectory;
- (id)sortedLogFileInfos;
- (id)sortedLogFileNames;
- (id)sortedLogFilePaths;
- (id)unsortedLogFileInfos;
- (id)unsortedLogFileNames;
- (id)unsortedLogFilePaths;

@end
