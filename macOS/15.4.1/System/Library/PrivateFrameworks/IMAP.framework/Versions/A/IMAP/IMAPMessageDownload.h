@class MCMimePart, MCMessage;
@protocol IMAPMessage;

@interface IMAPMessageDownload : IMAPCompoundDownload {
    MCMessage<IMAPMessage> *_message;
    unsigned char _usingPartialDownloads : 1;
    unsigned char _startedFetch : 1;
    unsigned char _fetchingBodyText : 1;
    unsigned char _doneAddingSubdownloads : 1;
}

@property (retain) MCMimePart *topLevelPart;
@property (retain) MCMessage<IMAPMessage> *message;
@property BOOL allowsPartialDownloads;
@property BOOL writesCacheFile;
@property BOOL dataWritten;
@property (readonly, nonatomic) BOOL isPartial;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (id)data;
- (BOOL)isComplete;
- (id)initWithMessage:(id)a0;
- (void)_addMimeSubdownloadsToPipeline:(id)a0 withCache:(id)a1;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (id)collectDataAndWriteToDisk:(BOOL)a0;
- (id)createCopy;
- (BOOL)handleFetchResult:(id)a0;
- (void)processResults;

@end
