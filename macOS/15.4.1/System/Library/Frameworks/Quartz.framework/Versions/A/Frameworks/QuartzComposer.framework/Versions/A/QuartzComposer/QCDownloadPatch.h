@class NSString, NSMutableData, QCURLConnection;

@interface QCDownloadPatch : QCRunLoopPatch <NSURLConnectionDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _urlMutex;
    QCURLConnection *_urlConnection;
    NSMutableData *_urlData;
    unsigned long long _urlDataLength;
    float _urlDownloadProgress;
    id _urlResource;
    void *_unused5[5];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithIdentifier:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connectionDidFinishLoading:(id)a0;
- (float)downloadProgress;
- (BOOL)isDownloading;
- (void)cancelDownload;
- (void)_cleanUp:(id)a0;
- (void)cleanup:(id)a0;
- (id)createResourceWithDownloadedData:(id)a0 sourceURL:(id)a1;
- (BOOL)downloadResource:(id)a0;
- (id)getDownloadedResource;

@end
