@class NSUUID, NSString, TGTextGenerationOperation, TGITextGenerationInferenceSession, NSObject;
@protocol OS_dispatch_queue;

@interface TGITextGenerationInferenceRunner : NSObject <TGITextGenerationInferenceRunner>

@property BOOL shouldDoCacheLookUp;
@property (getter=isCanceled) BOOL canceled;
@property (readonly) struct shared_ptr<TGITextGenerationInferenceDecodingPolicy> { struct TGITextGenerationInferenceDecodingPolicy *__ptr_; struct __shared_weak_count *__cntrl_; } decodingPolicy;
@property (readonly, copy) TGTextGenerationOperation *operation;
@property (readonly, copy) NSUUID *executionUUID;
@property (readonly) TGITextGenerationInferenceSession *session;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property struct shared_ptr<TGITextGenerationInferenceModelInterface> { struct TGITextGenerationInferenceModelInterface *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (id)initWithQueue:(id)a0 executionUUID:(id)a1 operation:(id)a2 session:(id)a3;
- (struct TGITextGenerationInferenceWordFragment { int x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; })runIncrementalInferenceWithTokenIDs:(const void *)a0;

@end
