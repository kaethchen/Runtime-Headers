@class NSString;

@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate> {
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_lock;
    void *m_handle;
    struct BinarySemaphore { BOOL m_isSet; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_lock; struct Condition { struct Atomic<bool> { struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } value; } m_hasWaiters; } m_condition; } m_semaphore;
    struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>> { struct SynchronousLoaderMessageQueue *m_ptr; } m_messageQueue;
    struct RetainPtr<NSURLRequest> { void *m_ptr; } m_requestResult;
    struct RetainPtr<NSCachedURLResponse> { void *m_ptr; } m_cachedResponseResult;
    struct optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTableTraits, WTF::ShouldValidateKey::No>> { union { char __null_state_; struct HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTableTraits, WTF::ShouldValidateKey::No> { struct HashTable<WTF::RefPtr<WTF::SchedulePair>, WTF::RefPtr<WTF::SchedulePair>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair>>, WTF::ShouldValidateKey::No> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } __val_; } ; BOOL __engaged_; } m_scheduledPairs;
    BOOL m_boolResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)connection:(id)a0 canAuthenticateAgainstProtectionSpace:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1 lengthReceived:(long long)a2;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connectionDidFinishLoading:(id)a0;
- (void)callFunctionOnMainThread:(void *)a0;
- (void)detachHandle;
- (id)initWithHandle:(void *)a0 messageQueue:(void *)a1;

@end
