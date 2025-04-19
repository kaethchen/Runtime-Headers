@class NSUUID, NUColorSampler, PHAsset, PAItemController;

@interface PAWhiteBalanceController : NSObject {
    PAItemController *_imageItemController;
}

@property (readonly) NUColorSampler *sampler;
@property (readonly) NSUUID *operationUUID;
@property (readonly) PHAsset *asset;
@property int whiteBalanceType;

- (void).cxx_destruct;
- (void)reset;
- (void)_setTemperatureAndTintFromRGBA:(double *)a0;
- (void)setAuto;
- (id)_compositionEditController;
- (void)_setTemperature:(double)a0 tint:(double)a1;
- (id)initWithAsset:(id)a0 operationUUID:(id)a1;
- (void)processPickedColor:(id)a0;
- (void)processRAWTempTintColor:(id)a0;

@end
