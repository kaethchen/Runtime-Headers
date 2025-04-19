@class NSURL;

@interface FPArchiveTemporaryFolder : NSObject {
    NSURL *_url;
    BOOL _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)temporaryFolderURLGetError:(id *)a0;

@end
