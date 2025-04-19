@class NSOperationQueue, LSBundleRecord;

@interface VSBundleRecord : NSObject

@property (retain, nonatomic) LSBundleRecord *record;
@property (retain, nonatomic) NSOperationQueue *lsQueue;

- (void).cxx_destruct;
- (id)bundleVersion;
- (id)initWithBundleID:(id)a0;

@end
