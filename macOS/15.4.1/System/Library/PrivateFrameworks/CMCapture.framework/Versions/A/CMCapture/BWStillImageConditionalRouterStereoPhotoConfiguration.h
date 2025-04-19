@interface BWStillImageConditionalRouterStereoPhotoConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int mainImageOutputIndex;
@property (readonly, nonatomic) unsigned int stereoPhotoOutoutIndex;

+ (id)stereoPhotoConfiguration;

- (id)init;

@end
