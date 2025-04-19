@class NSString, NSArray, DDThreadManager;
@protocol DDOperationDelegate;

@interface DDOperation : NSOperation {
    id<DDOperationDelegate> _delegate;
    DDThreadManager *_threadManager;
    struct __DDScanQuery { } *_query;
    long long _jobIdentifier;
}

@property (copy) NSString *scannedTextID;
@property (weak) id viewOrController;
@property (retain) NSArray *results;
@property int tag;
@property int failuresCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)cancel;
- (void)main;
- (id)initWithDocument:(id)a0 threadManager:(id)a1;
- (void)_scanDone;
- (id)initWithQuery:(struct __DDScanQuery { } *)a0 threadManager:(id)a1;
- (void)postOperationCleanUp;
- (void)scan;
- (struct __DDScanQuery { } *)scanQuery;
- (void)setScanQuery:(struct __DDScanQuery { } *)a0;

@end
