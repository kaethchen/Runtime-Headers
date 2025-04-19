@class NSString, NSData, VCSandboxedURL;

@interface VCMediaRecorderHistoryRequestContext : NSObject {
    NSData *_serializedDirectoryURL;
    VCSandboxedURL *_directoryURL;
}

@property (readonly, nonatomic) unsigned char mediaType;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) unsigned int timestamp;
@property (readonly, nonatomic) BOOL hasDirectoryURL;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;

- (void)dealloc;
- (id)description;
- (id)deserializeDirectoryURL;
- (id)directoryURLDescription;
- (id)initWithSerializedRequest:(id)a0;

@end
