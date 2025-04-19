@class SLShareableContentMetadata, SLShareableContentInitiatorRequest;

@interface SLFetchShareableContentMetadataActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) SLShareableContentMetadata *metadata;
@property (retain, nonatomic) SLShareableContentInitiatorRequest *initiatorRequest;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithMetadata:(id)a0 initiatorRequest:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
