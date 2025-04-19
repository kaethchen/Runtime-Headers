@class WBSSiteMetadataRequest;

@interface _WBSPendingLPLinkMetadataRequest : NSObject

@property (readonly, nonatomic) WBSSiteMetadataRequest *request;
@property (readonly, nonatomic) BOOL allowDelayedResponse;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 allowDelayedResponse:(BOOL)a1;

@end
