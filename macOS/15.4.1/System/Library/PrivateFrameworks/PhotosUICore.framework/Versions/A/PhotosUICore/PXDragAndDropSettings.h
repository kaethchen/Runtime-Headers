@interface PXDragAndDropSettings : PXSettings

@property (nonatomic) BOOL useData;
@property (nonatomic) BOOL useFileProvider;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
