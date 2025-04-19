@class LPLinkMetadata;

@interface SLFetchAsynchronousLPMetadataActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) LPLinkMetadata *metadata;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithMetadata:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
