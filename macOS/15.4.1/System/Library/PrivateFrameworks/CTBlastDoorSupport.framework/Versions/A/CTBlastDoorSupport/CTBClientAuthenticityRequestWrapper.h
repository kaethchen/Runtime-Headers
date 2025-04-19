@interface CTBClientAuthenticityRequestWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::ClientAuthenticityRequest> { union { char __null_state_; struct ClientAuthenticityRequest { struct vector<ctb::ClientAuthenticityRequest::Method, std::allocator<ctb::ClientAuthenticityRequest::Method>> { struct Method *__begin_; struct Method *__end_; struct __compressed_pair<ctb::ClientAuthenticityRequest::Method *, std::allocator<ctb::ClientAuthenticityRequest::Method>> { struct Method *__value_; } __end_cap_; } fMethods; } __val_; } ; BOOL __engaged_; } wrapped;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWrapped:(struct optional<ctb::ClientAuthenticityRequest> { union { char x0; struct ClientAuthenticityRequest { struct vector<ctb::ClientAuthenticityRequest::Method, std::allocator<ctb::ClientAuthenticityRequest::Method>> { struct Method *x0; struct Method *x1; struct __compressed_pair<ctb::ClientAuthenticityRequest::Method *, std::allocator<ctb::ClientAuthenticityRequest::Method>> { struct Method *x0; } x2; } x0; } x1; } x0; BOOL x1; })a0;

@end
