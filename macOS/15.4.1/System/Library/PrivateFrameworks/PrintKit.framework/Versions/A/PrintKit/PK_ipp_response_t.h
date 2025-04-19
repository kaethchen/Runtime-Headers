@interface PK_ipp_response_t : PK_ipp_t

@property (readonly) struct ipp_status_t { int x0; } status;

- (id)initWithRequest:(id)a0;
- (id)_descriptionLeader;
- (id)rewriteURLAttributes:(id /* block */)a0;

@end
