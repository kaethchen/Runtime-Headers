@class TSCH3DMaterialPackage, TSCH3DLightingPackage, TSCH3DEnvironmentPackage;

@interface TSCH3DLightingModel : NSObject <NSCopying>

@property (retain, nonatomic) TSCH3DMaterialPackage *materials;
@property (retain, nonatomic) TSCH3DLightingPackage *lightings;
@property (retain, nonatomic) TSCH3DEnvironmentPackage *environment;

+ (id)lightingModel;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)clone;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)affect:(id)a0 states:(id)a1 scene:(id)a2 texturePool:(id)a3;
- (id)diffuseTextureTiling;
- (id)lightingModelWithLightings:(id)a0;
- (id)representativeMaterialLightenedByPercentage:(id)a0;

@end
