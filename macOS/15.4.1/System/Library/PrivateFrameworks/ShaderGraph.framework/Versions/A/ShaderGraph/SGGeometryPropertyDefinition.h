@class NSString;

@interface SGGeometryPropertyDefinition : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ referencedGeomPropName;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *description;

+ (id)geometryPropertyWithName:(id)a0 mappingTo:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
