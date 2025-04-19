@class LPLinkMetadata;

@interface WBSLPLinkMetadataResponse : WBSSiteMetadataResponse

@property (readonly, copy, nonatomic) LPLinkMetadata *metadata;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 metadata:(id)a1;

@end
