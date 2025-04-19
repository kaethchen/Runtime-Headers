@class NSString;

@interface PHLivePhotoRequestOptions : NSObject <PHMediaRequestThreadingOptions, PHMediaRequestLiveRenderingOptions, NSCopying>

@property (readonly, copy, nonatomic) id /* block */ progressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL liveRenderVideoIfNeeded;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) BOOL includeImage;
@property (nonatomic) BOOL preferHDR;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isSynchronous;
- (BOOL)isCurrentVersion;
- (BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
- (id)renderResultHandlerQueue;
- (id)resultHandlerQueue;

@end
