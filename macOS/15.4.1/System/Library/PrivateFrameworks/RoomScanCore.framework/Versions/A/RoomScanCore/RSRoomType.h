@class NSString, RSRoomTypePolygon;

@interface RSRoomType : NSObject <NSCopying, NSSecureCoding> {
    float _floorHeight;
    float _ceilingHeight;
    float _confidenceScore;
    long long storyLevel;
    NSString *_label;
    RSRoomTypePolygon *_polygon;
    void /* unknown type, empty encoding */ _polygonCenter;
    struct { void /* unknown type, empty encoding */ corners[4]; } _quad;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) RSRoomTypePolygon *polygon;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ polygonCenter;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly) struct { void /* unknown type, empty encoding */ x0[4]; } quad;
@property (readonly, nonatomic) float floorHeight;
@property (readonly, nonatomic) float ceilingHeight;
@property (readonly, nonatomic) float confidenceScore;
@property (readonly, nonatomic) int insideRoom;
@property (readonly, nonatomic) unsigned int groupId;
@property (readonly, nonatomic) long long storyLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)translateBy:(SEL)a0;
- (id)initWithDictionaryRepresentation:(id)a0 withGroupId:(unsigned int)a1;
- (void)rotateAlongZAxisRightHand:(float)a0;

@end
