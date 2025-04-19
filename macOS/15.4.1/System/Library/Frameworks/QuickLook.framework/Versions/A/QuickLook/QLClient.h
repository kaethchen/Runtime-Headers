@class NSString, NSDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface QLClient : NSObject

@property (copy) NSURL *url;
@property (copy) NSString *contentType;
@property (copy) NSDictionary *options;
@property (retain) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain) id representedObject;
@property long long triesCount;
@property BOOL startedOnServer;
@property BOOL cancelled;
@property int lastError;
@property (retain) id associatedPreviewItem;

+ (id)newLockQueue;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 options:(id)a1;

@end
