@class NSString;
@protocol PKDownloadDelegate, NSObject;

@interface PKDownload : NSObject {
    NSString *_dstPath;
    BOOL _deleteFileOnFailure;
    BOOL _overwriteIfFileExists;
}

@property (readonly, weak) id<PKDownloadDelegate, NSObject> delegate;
@property (readonly) NSString *destinationPath;
@property BOOL downloadInBackground;

+ (BOOL)canDownloadURL:(id)a0;
+ (id)_downloadClasses;
+ (void)addDownloadClass:(Class)a0;
+ (BOOL)canDownloadWithResumeData:(id)a0;
+ (id)downloadWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;
+ (id)downloadWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)sourcePath;
- (id)resumeData;
- (void)setDestination:(id)a0 allowOverwrite:(BOOL)a1;
- (id)sourceURL;
- (BOOL)failedDownloadValidation;
- (id)initWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;
- (id)initWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;
- (BOOL)validatesDuringDownload;

@end
