@class NSObject;
@protocol OS_dispatch_queue;

@interface PXImageRequestOptions : NSObject <NSCopying>

@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long resizeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) BOOL allowSecondaryDegradedImage;
@property (nonatomic) BOOL useAsyncForFastOpportunisticResult;
@property (nonatomic) long long opportunisticDegradedImagesToReturn;
@property (nonatomic) struct CGSize { double width; double height; } fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property (nonatomic) long long loadingMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) BOOL useLowMemoryMode;
@property (nonatomic) BOOL allowPlaceholder;
@property (nonatomic) BOOL preferHDR;
@property (nonatomic) double targetHDRHeadroom;
@property (nonatomic) BOOL includeHDRGainMap;
@property (nonatomic) BOOL chooseAlchemist;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)copyPropertiesToOptions:(id)a0;

@end
