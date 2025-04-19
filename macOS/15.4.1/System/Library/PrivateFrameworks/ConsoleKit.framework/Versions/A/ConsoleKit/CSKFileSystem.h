@class NSObject;
@protocol OS_dispatch_queue;

@interface CSKFileSystem : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *systemSerialQueue;
@property (copy, nonatomic) id /* block */ handler;

+ (id)sharedInstance;
+ (BOOL)isFileAtPathValidKtraceLogFile:(id)a0;
+ (id)_findPath:(id)a0;
+ (id)_realUserHomeDirectory;
+ (id)applicationURLForLogFile:(id)a0;
+ (id)archiveFileExtensions;
+ (BOOL)doesURLPointToValidDirectory:(id)a0;
+ (BOOL)doesURLPointToValidDirectory:(id)a0 withExtension:(id)a1;
+ (BOOL)doesURLPointToValidFile:(id)a0;
+ (BOOL)doesURLPointToValidFile:(id)a0 withExtension:(id)a1;
+ (void)enumerateContentAtURL:(id)a0 properties:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
+ (BOOL)isCrashJSONCompatibleTypeForLogFile:(id)a0;
+ (BOOL)isExtensionAnArchive:(id)a0;
+ (BOOL)isFileAtPathValidASLFile:(id)a0;
+ (BOOL)isFileAtPathValidLogArchive:(id)a0;
+ (BOOL)isFileAtURLASLFile:(id)a0;
+ (BOOL)isFileAtURLCoreAnalyticsFile:(id)a0;
+ (BOOL)isFileAtURLCrashLogFile:(id)a0;
+ (BOOL)isFileAtURLJSONFile:(id)a0;
+ (BOOL)isFileAtURLLogFile:(id)a0;
+ (BOOL)isFileAtURLMiscLogFile:(id)a0;
+ (BOOL)isFileAtURLSpinLogFile:(id)a0;
+ (BOOL)isJSONCompatibleTypeForFile:(id)a0;
+ (BOOL)isJSONCompatibleTypeForFile:(id)a0 allowedTypes:(id)a1;
+ (id)unarchiveExecutablePathForExtension:(id)a0;
+ (id)userDiagnosticReportsPath;
+ (id)userLibraryLogsPath;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchFilesAtURL:(id)a0 deep:(BOOL)a1 queue:(id)a2 target:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_fetchFilesAtURL:(id)a0 deep:(BOOL)a1 target:(id)a2 completionHandler:(id /* block */)a3;
- (void)asyncDeepFetchFilesAtURL:(id)a0 queue:(id)a1 target:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)asyncDeepFetchFilesAtURL:(id)a0 target:(id)a1 completionHandler:(id /* block */)a2;
- (void)asyncFetchDirectoriesAtURL:(id)a0 target:(id)a1 completionHandler:(id /* block */)a2;
- (void)asyncFetchFilesAtURL:(id)a0 target:(id)a1 completionHandler:(id /* block */)a2;

@end
