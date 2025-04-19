@class GEOVectorTile, GEOFeatureStyleAttributes;

@interface GEOFeature : NSObject {
    GEOVectorTile *_containingTile;
    void *_feature;
    int _type;
    GEOFeatureStyleAttributes *_cached_attributes;
    struct once_flag { unsigned long long __state_; } _initAttributesFlag;
}

@property (readonly, nonatomic) GEOVectorTile *containingTile;
@property (readonly, nonatomic) const char *name;
@property (readonly, nonatomic) unsigned long long labelOffset;
@property (readonly, nonatomic) unsigned long long labelCount;
@property (readonly, nonatomic) unsigned long long shieldOffset;
@property (readonly, nonatomic) unsigned long long shieldCount;
@property (readonly, nonatomic) unsigned int styleID;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) BOOL hasBusinessID;
@property (readonly, nonatomic) unsigned long long businessID;
@property (readonly, nonatomic) float minZoomRank;
@property (readonly, nonatomic) unsigned long long flyoverAnimationID;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *attributes;
@property (readonly, nonatomic) int type;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_setType:(int)a0;
- (void *)get;
- (id)init:(void *)a0 withVectorTile:(id)a1;

@end
