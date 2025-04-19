@class GEOMultiSectionFeature;

@interface GEOBuildingFootprintFeature : NSObject {
    void *_buildingFootprintFeature;
    GEOMultiSectionFeature *_multiSectionFeature;
}

- (void).cxx_destruct;
- (id)feature;
- (unsigned long long)extrusionOffset;
- (void *)get;
- (unsigned long long)baseOffset;
- (BOOL)hasLandmark;
- (id)init:(void *)a0 withVectorTile:(id)a1;
- (BOOL)isForTransit;

@end
