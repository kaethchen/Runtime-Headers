@class ODDNodePoint, NSArray, ODDStyleDefinition, ODDColorTransform;

@interface ODDDiagram : OADDrawable {
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
}

@property (retain, nonatomic) NSArray *equivalentDrawables;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)colorTransform;
- (id)styleDefinition;
- (id)documentPoint;
- (void)setDocumentPoint:(id)a0;
- (void)setParentTextListStyle:(id)a0;

@end
