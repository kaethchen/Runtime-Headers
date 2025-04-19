@class NSArray;

@interface RSFloorPlan : NSObject <NSCopying, NSSecureCoding> {
    unsigned int groupId;
    float ceilingHeight;
    float floorHeight;
    float rotationAngleAlongZ;
    NSArray *walls;
    NSArray *doors;
    NSArray *windows;
    NSArray *openings;
    NSArray *opendoors;
    NSArray *objects;
    NSArray *curvedWalls;
    NSArray *roomTypes;
    NSArray *floors;
    NSArray *curvedWindows;
    NSArray *curvedDoors;
    NSArray *wallLists;
    long long storyLevel;
    void /* unknown type, empty encoding */ translationXYZ;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *walls;
@property (readonly, nonatomic) NSArray *doors;
@property (readonly, nonatomic) NSArray *windows;
@property (readonly, nonatomic) NSArray *openings;
@property (readonly, nonatomic) NSArray *opendoors;
@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSArray *curvedWalls;
@property (readonly, nonatomic) NSArray *roomTypes;
@property (readonly, nonatomic) NSArray *floors;
@property (readonly, nonatomic) NSArray *curvedWindows;
@property (readonly, nonatomic) NSArray *curvedDoors;
@property (readonly, nonatomic) long long storyLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)updateObjects:(id)a0;
- (void)appendFloorPlan:(id)a0;
- (void)updateStructure:(id)a0;
- (void)writeToJson:(id)a0;
- (void)writeToObj:(id)a0;
- (void)writeToPlist:(id)a0;

@end
