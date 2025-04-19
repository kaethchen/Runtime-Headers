@interface BWStillImageConditionalRouterFocusPixelDisparityInputConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int defaultOutputIndex;
@property (readonly, nonatomic) unsigned int focusPixelDisparityInputOutputIndex;

+ (id)focusPixelDisparityInputConfiguration;

- (id)init;

@end
