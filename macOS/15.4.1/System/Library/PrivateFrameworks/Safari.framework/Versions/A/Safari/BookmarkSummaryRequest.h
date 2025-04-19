@class NSString;

@interface BookmarkSummaryRequest : WBSSiteMetadataRequest <FetchableItem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)urlString;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;

@end
