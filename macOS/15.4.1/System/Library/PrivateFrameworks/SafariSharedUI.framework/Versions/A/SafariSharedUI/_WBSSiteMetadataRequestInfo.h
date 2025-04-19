@class NSSet, NSOperation, NSMutableSet;
@protocol WBSSiteMetadataProvider;

@interface _WBSSiteMetadataRequestInfo : NSObject {
    NSMutableSet *_tokens;
    NSMutableSet *_requestTokens;
    NSMutableSet *_cacheRequestTokens;
}

@property (readonly, nonatomic) id<WBSSiteMetadataProvider> provider;
@property (readonly, copy, nonatomic) NSSet *tokens;
@property (readonly, copy, nonatomic) NSSet *requestTokens;
@property (weak, nonatomic) NSOperation *operation;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)addCacheRequestToken:(id)a0;
- (void)addRequestToken:(id)a0;
- (BOOL)canStopWatchingRequestAfterRemovingToken:(id)a0;

@end
