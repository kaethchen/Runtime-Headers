@class SKDiskImage, SKDiskImageResizeParams, SKRecoveryMoverInfo, SKDiskImageSizeLimits;

@interface SKDiskImageResizerBase : SKDiskResizerBase

@property (retain, nonatomic) SKDiskImage *image;
@property (retain, nonatomic) SKDiskImageResizeParams *resizeParams;
@property (retain, nonatomic) SKRecoveryMoverInfo *recoveryMoverInfo;
@property (retain, nonatomic) SKDiskImageSizeLimits *limits;
@property (nonatomic) unsigned long long requiredSizeForRecoveryMove;

- (void).cxx_destruct;
- (id)attachForResizeParams;
- (BOOL)checkLimitsWithError:(id *)a0;
- (id)fitToSize:(id *)a0;
- (id)imageResize:(id *)a0;
- (id)initWithDiskImage:(id)a0 limits:(id)a1 resizeParams:(id)a2 error:(id *)a3;
- (id)moveRecovery:(id *)a0;
- (BOOL)prepareRecoveryMoverWithError:(id *)a0;
- (void)setRequestedSize:(unsigned long long)a0;
- (id)volumeResize:(id *)a0;

@end
