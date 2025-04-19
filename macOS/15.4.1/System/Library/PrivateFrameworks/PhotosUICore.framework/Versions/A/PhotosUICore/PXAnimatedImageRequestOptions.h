@interface PXAnimatedImageRequestOptions : PXImageRequestOptions

@property (nonatomic) BOOL allowPreCaching;
@property (nonatomic) BOOL useSharedImageDecoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)photoKitRequestOptions;

@end
