@class TSCH3DVector;

@interface TSCH3DDirectionalLight : TSCH3DLight <TSCH3DLightDirectional> {
    TSCH3DVector *_direction;
}

@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } direction;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (Class)effectClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
