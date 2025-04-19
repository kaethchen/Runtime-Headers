@class NSString, NSURL;
@protocol PassFileDownloadDelegate;

@interface PassFileDownload : NSObject {
    NSURL *_tempFileURL;
    BOOL _wasCanceled;
}

@property (weak, nonatomic) id<PassFileDownloadDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reportError:(id)a0;
- (id)initWithMIMEType:(id)a0;
- (void)_deleteTempFile;
- (void)openPassFileDownload:(id)a0;
- (id)wkDownload:(id)a0 decideDestinationWithSuggestedFilename:(id)a1 allowOverwrite:(BOOL *)a2;
- (void)wkDownload:(id)a0 didFailWithError:(id)a1;
- (void)wkDownloadDidCancel:(id)a0;
- (void)wkDownloadDidFinish:(id)a0;
- (void)wkDownloadProcessDidCrash:(id)a0;

@end
