@class NSImage;

@interface SnapshotResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) NSImage *snapshot;

+ (id)responseWithURL:(id)a0 snapshot:(id)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 snapshot:(id)a1;

@end
