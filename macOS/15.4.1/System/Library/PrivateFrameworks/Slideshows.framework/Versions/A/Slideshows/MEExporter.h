@class MPDocument, NSString, MEExporterManager, NSCondition;

@interface MEExporter : NSObject {
    MEExporterManager *_manager;
    MPDocument *_document;
    SEL _progressSelector;
    id _progressTarget;
    id _progressObject;
    NSCondition *_pauseCondition;
}

@property (readonly, nonatomic) MPDocument *document;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) BOOL isProgressImageEnabled;
@property (readonly, nonatomic) NSString *tmpDirectory;

+ (id)localizedString:(id)a0;
+ (void)copyWebRendererToPath:(id)a0 useDebug:(BOOL)a1;
+ (BOOL)createErrorWithCode:(int)a0 andDescription:(id)a1 andSuggestion:(id)a2 andUnderlyingError:(id)a3 outError:(id *)a4;
+ (BOOL)createErrorWithCode:(int)a0 andDescription:(id)a1 outError:(id *)a2;
+ (BOOL)createNotEnoughSpaceErrorForFreeSpace:(unsigned long long)a0 andNeededSpace:(unsigned long long)a1 outError:(id *)a2;
+ (id)createTemporaryDirectoryForPath:(id)a0 error:(id *)a1;
+ (void)postProcessWebRendererAtPath:(id)a0;

- (void)dealloc;
- (id)preferences;
- (void)setPaused:(BOOL)a0;
- (void)cancelExport;
- (id)initWithDocument:(id)a0;
- (BOOL)exportToFile:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (BOOL)_exportToFile:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (void)checkPaused;
- (id)initWithDocument:(id)a0 andManager:(id)a1;
- (void)pauseExport;
- (void)reportProgressWithPercentage:(id)a0 andImage:(id)a1 andInfo:(id)a2;
- (void)reportProgressWithPercentage:(id)a0 andInfo:(id)a1;
- (void)resumeExport;
- (void)setCancelled;
- (void)setProgressSelector:(SEL)a0 withTarget:(id)a1 andObject:(id)a2;

@end
