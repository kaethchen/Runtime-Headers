@class PKPackageReference, NSString, PKDownload;

@interface PKDownloaderQueueElement : NSObject {
    PKPackageReference *_packageRef;
    NSString *_destination;
    PKDownload *_download;
    unsigned long long _downloadedBytes;
    unsigned long long _checksummedBytes;
    unsigned long long _progressIncrement;
}

- (void)dealloc;
- (id)description;
- (id)destination;
- (id)download;
- (id)packageReference;
- (unsigned long long)downloadedBytes;
- (void)setDownload:(id)a0;
- (void)_addToChecksummedBytes:(unsigned long long)a0;
- (void)_addToDownloadedBytes:(unsigned long long)a0;
- (unsigned long long)_getAndClearProgressIncrement;
- (unsigned long long)_reportedProgress;
- (void)_resetProgress;
- (unsigned long long)checksummedBytes;
- (id)initWithPackageReference:(id)a0 destination:(id)a1;
- (id)partialPath;
- (id)resumeDataPath;

@end
