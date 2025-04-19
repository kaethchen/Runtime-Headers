@class NSImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) NSImage *thumbnail;

+ (id)responseWithURL:(id)a0 thumbnail:(id)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 thumbnail:(id)a1;

@end
