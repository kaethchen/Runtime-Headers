@interface PXTilingSettings : PXSettings

@property (nonatomic) BOOL flipLayoutsHorizontally;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
