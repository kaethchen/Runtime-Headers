@interface IFComponent : NSObject {
    struct IFComponent_Private { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } *_private;
}

+ (void)initialize;
+ (id)type;
+ (id)types;
+ (id)componentForFilesystemPath:(id)a0;
+ (id)componentForNSXMLElementRepresentation:(id)a0;
+ (id)componentForPatchingUsingNode:(id)a0 inPlan:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (id)identifier;
- (id)path;
- (void)setPath:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)actions;
- (void)addAction:(id)a0;
- (id)versionString;
- (id)attributeForKey:(id)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)fullPath;
- (void)addAttributesFromDictionary:(id)a0;
- (void)addActions:(id)a0;
- (id)subComponents;
- (BOOL)isEqualToComponent:(id)a0;
- (id)parentComponent;
- (void)addSubComponent:(id)a0;
- (id)componentLineage;
- (id)ingoredAttributeTypes;
- (id)initWithFilesystemPath:(id)a0;
- (id)initWithIdentifier:(id)a0 andAttributes:(id)a1;
- (id)initWithNSXMLElement:(id)a0;
- (void)setParentComponent:(id)a0;
- (id)subComponentAtSubPath:(id)a0;
- (BOOL)updateWithNSXMLElementRepresentation:(id)a0;

@end
