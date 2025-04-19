@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (id)geometry;
- (void)setGeometry:(id)a0;
- (id)shapeProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)createPresetGeometryWithShapeType:(int)a0;
- (void)flattenProperties;
- (BOOL)isTextBox;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)setTextBody:(id)a0;
- (id)shapeStyle;
- (id)textBody;

@end
