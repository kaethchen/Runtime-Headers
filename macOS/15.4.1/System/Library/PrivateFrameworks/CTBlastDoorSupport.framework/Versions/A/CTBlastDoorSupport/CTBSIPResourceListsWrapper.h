@interface CTBSIPResourceListsWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::SIPResourceLists> { union { char __null_state_; struct SIPResourceLists { struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } fParticipants; } __val_; } ; BOOL __engaged_; } wrapped;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWrapped:(struct optional<ctb::SIPResourceLists> { union { char x0; struct SIPResourceLists { struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x0; } x1; } x0; BOOL x1; })a0;

@end
