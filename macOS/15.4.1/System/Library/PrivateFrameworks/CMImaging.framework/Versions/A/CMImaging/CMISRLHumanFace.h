@class NSDictionary;

@interface CMISRLHumanFace : NSObject {
    NSDictionary *_faceMetadata;
    float _SkinToneLevelMapped;
    float _SkinToneLevels[6];
    float _FilteredSkinToneLevels[6];
}

@property (readonly) unsigned long long FaceID;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } Rect;
@property (readonly) float RectLargestSide;
@property (readonly) float *SkinToneLevels;
@property (readonly) float SkinToneLevelMapped;
@property (readonly) float *FilteredSkinToneLevels;

+ (float)mappedSkinToneLevel:(float *)a0;

- (void).cxx_destruct;
- (id)asDictionary;
- (BOOL)areSkinToneLevelsEqualTo:(id)a0;
- (id)initWithFaceObject:(id)a0;
- (void)setFilteredSkinToneLevels:(float *)a0;

@end
