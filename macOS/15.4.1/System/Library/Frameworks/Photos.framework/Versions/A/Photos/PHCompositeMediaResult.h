@class NSDictionary, NSMutableDictionary;

@interface PHCompositeMediaResult : NSObject {
    NSMutableDictionary *_mutableInfo;
    NSDictionary *_imageProperties;
    BOOL _isInCloud;
    BOOL _cancelled;
}

@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) BOOL isDerivedFromDeferredPreview;
@property (nonatomic) BOOL isInCloud;
@property (nonatomic, getter=isCancelled) BOOL cancelled;

+ (id)resultWithRequestID:(int)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)error;
- (id)info;
- (void)setError:(id)a0;
- (id)imageData;
- (id)initWithRequestID:(int)a0;
- (id)exifOrientation;
- (struct CGImage { } *)imageRef;
- (id)imageProperties;
- (id)imageURL;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)clearError;
- (id)sandboxExtensionToken;
- (void)setSandboxExtensionToken:(id)a0;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (id)mediaMetadata;
- (void)setErrorIfNone:(id)a0;
- (id)_sanitizedError;
- (id)allowedInfoKeys;
- (void)addInfoFromDictionary:(id)a0;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (id)baseVersionNeeded;
- (BOOL)canHandleAdjustmentData;
- (id)cancelledInfoKey;
- (unsigned int)cgOrientation;
- (BOOL)containsValidData;
- (id)errorInfoKey;
- (id)fingerPrint;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)imageSandboxExtensionToken;
- (id)inCloudInfoKey;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (id)videoAdjustmentData;
- (id)videoMediaItemMakerData;
- (id)videoSandboxExtensionToken;

@end
