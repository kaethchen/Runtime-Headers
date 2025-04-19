@class NSString, NSURL;
@protocol WalletOrderFileDownloadDelegate;

@interface WalletOrderFileDownload : NSObject {
    NSURL *_tempFileURL;
    BOOL _wasCanceled;
}

@property (weak, nonatomic) id<WalletOrderFileDownloadDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMIMEType:(id)a0;
- (void)_deleteTempFile;
- (void)openWalletOrderFileDownload:(id)a0;
- (id)wkDownload:(id)a0 decideDestinationWithSuggestedFilename:(id)a1 allowOverwrite:(BOOL *)a2;
- (void)wkDownload:(id)a0 didFailWithError:(id)a1;
- (void)wkDownloadDidCancel:(id)a0;
- (void)wkDownloadDidFinish:(id)a0;
- (void)wkDownloadProcessDidCrash:(id)a0;

@end
