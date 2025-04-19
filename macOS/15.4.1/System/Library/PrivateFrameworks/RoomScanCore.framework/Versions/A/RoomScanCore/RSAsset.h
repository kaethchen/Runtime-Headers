@class NSArray, RSFloorPlan;

@interface RSAsset : NSObject <NSCopying, NSSecureCoding> {
    BOOL _isCaptured;
    RSFloorPlan *_floorPlan;
    NSArray *_mirrorPoints;
    long long _version;
    RSFloorPlan *_rawFloorPlan;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RSFloorPlan *floorPlan;
@property (readonly, nonatomic) NSArray *mirrorPoints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;

@end
