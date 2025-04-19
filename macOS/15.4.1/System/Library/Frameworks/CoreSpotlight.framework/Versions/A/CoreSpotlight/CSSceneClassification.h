@interface CSSceneClassification : CSExternalAnalysisTag <CSCoderEncoder>

@property unsigned long long sceneIdentifier;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property float sceneArea;
@property long long sceneType;
@property long long mediaType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithLabel:(id)a0 synonyms:(id)a1 confidence:(double)a2 sceneIdentifier:(unsigned long long)a3;

@end
