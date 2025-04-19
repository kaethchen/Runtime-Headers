@class NSString, MTRContentLauncherClusterDimensionStruct;

@interface MTRContentLauncherClusterStyleInformationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) MTRContentLauncherClusterDimensionStruct *size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
