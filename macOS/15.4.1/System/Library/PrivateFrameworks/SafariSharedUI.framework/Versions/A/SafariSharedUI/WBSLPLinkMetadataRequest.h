@interface WBSLPLinkMetadataRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) BOOL allowFetching;

- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 allowFetching:(BOOL)a1;

@end
