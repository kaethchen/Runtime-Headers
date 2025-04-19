@class NSString, NSNumber, PLInternalResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource> {
    NSNumber *_cachedIsPlayable;
}

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsHDR;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)version;
- (BOOL)isStreamable;
- (id)additionalDescription;
- (BOOL)isPlayable;
- (BOOL)isDownloadable;
- (id)uniformTypeIdentifier;
- (id)fileURLIfLocal;
- (BOOL)isLocallyAvailable;
- (unsigned short)storeClassID;
- (BOOL)isOriginalVideo;
- (BOOL)isHDRDerivative;
- (id)cachedIsPlayable;
- (BOOL)hasAssociatedMediaMetadata;
- (id)initWithBackingResource:(id)a0;
- (BOOL)isHDROrSDRDependingOnMasterVideo;
- (BOOL)isLargeQuality;
- (BOOL)isLocallyGeneratable;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isSDRFallback;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)a0;

@end
