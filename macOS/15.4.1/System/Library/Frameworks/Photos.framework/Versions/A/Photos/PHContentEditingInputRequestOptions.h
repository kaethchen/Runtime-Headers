@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PHContentEditingInputRequestOptions : NSObject <PHMediaRequestThreadingOptions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldForceOriginalChoice;
@property (nonatomic) BOOL disallowFallbackAdjustmentBase;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long contentMode;
@property (nonatomic) BOOL dontAllowRAW;
@property (copy, nonatomic) id /* block */ canHandleRAW;
@property (nonatomic) unsigned long long originalChoice;
@property (nonatomic) BOOL forceRunAsUnadjustedAsset;
@property (nonatomic) BOOL forceReturnFullLivePhoto;
@property (nonatomic) BOOL forcePrepareCurrentBaseVersionInAddition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) BOOL loadResourcesToFlip;
@property (nonatomic) BOOL skipDisplaySizeImage;
@property (nonatomic) BOOL skipLivePhotoImageAndAVAsset;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) BOOL requireOriginalsDownloaded;
@property (copy, nonatomic) id /* block */ canHandleAdjustmentData;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isSynchronous;

@end
