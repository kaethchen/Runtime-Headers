@class NSDate, NSPort, NSURL, NSError, NSString, EFPathComponent, NSProgress, NSNumber;

@interface MCRemoteURLAttachmentDataSource : NSObject <NSURLSessionDownloadDelegate, MCAttachmentDataSource>

@property (retain, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) NSPort *downloadPort;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (retain, nonatomic) NSError *downloadError;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSDate *downloadURLExpiration;
@property (readonly, nonatomic) BOOL isAutoArchiveAttachment;
@property (readonly, nonatomic) BOOL isMailDropIndividualImage;
@property (readonly, nonatomic) BOOL isMailDropImageArchive;
@property (readonly, copy, nonatomic) EFPathComponent *filename;
@property (readonly, nonatomic) NSURL *attachmentsDirectory;
@property (copy, nonatomic) id /* block */ fileWrapperCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL dataIsLocallyAvailable;
@property (readonly, nonatomic) BOOL canResultsBeCached;
@property (readonly, nonatomic) BOOL isDirectory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (BOOL)_isExpired;
- (void)_persistDownloadedFileWrapper:(id)a0 originalContentsURL:(id)a1;
- (unsigned long long)approximateSizeForAccessLevel:(long long)a0;
- (void)dataForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (void)fileWrapperForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (id)initWithAttachment:(id)a0 attachmentsDirectory:(id)a1;
- (void)_downloadRemoteAttachment;
- (id)_remoteDownloadQueue;
- (id)initWithRemoteURL:(id)a0;

@end
