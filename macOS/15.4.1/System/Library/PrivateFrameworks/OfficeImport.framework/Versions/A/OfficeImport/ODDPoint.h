@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)a0 order:(unsigned long long)a1 array:(id *)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)text;
- (void)setText:(id)a0;
- (id)shapeProperties;
- (id)propertySet;

@end
