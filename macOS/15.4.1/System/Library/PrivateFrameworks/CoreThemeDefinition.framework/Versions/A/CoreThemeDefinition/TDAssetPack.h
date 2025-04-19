@class NSSet, CUIMutableCommonAssetStorage, NSString;

@interface TDAssetPack : NSObject <NSCopying>

@property (retain) CUIMutableCommonAssetStorage *assetStore;
@property (retain, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSString *outputPath;
@property (copy, nonatomic) NSString *assetPackIdentifier;
@property (nonatomic) BOOL wasModified;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
