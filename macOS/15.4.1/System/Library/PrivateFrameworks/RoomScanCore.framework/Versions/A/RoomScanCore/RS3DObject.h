@class NSString, NSUUID, NSArray, NSDictionary, NSMutableDictionary;

@interface RS3DObject : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_parts;
    NSMutableDictionary *_beautified_parts;
    BOOL status;
    float confidence;
    NSString *type;
    NSUUID *identifier;
    NSUUID *parent_id;
    NSArray *logits;
    NSArray *embedding2d;
    NSArray *corners_status;
    NSString *detection_source;
    long long storyLevel;
    void /* unknown type, empty encoding */ color;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *parent_id;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) NSArray *logits;
@property (readonly, nonatomic) NSArray *embedding2d;
@property (readonly, nonatomic) NSDictionary *parts;
@property (readonly, nonatomic) NSDictionary *beautified_parts;
@property (readonly, nonatomic) NSArray *corners_status;
@property (readonly, nonatomic) NSArray *edges_status;
@property (readonly, nonatomic) BOOL status;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ color;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (readonly, nonatomic) NSMutableDictionary *groups;
@property (readonly, nonatomic) NSMutableDictionary *boxesDict;
@property (readonly, nonatomic) long long storyLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)translateBy:(SEL)a0;
- (BOOL)getDimension:(id)a0 dim:(void *)a1;
- (BOOL)getTransform:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1;
- (BOOL)hasBoxesDict:(id)a0;
- (void)rotateAlongZAxisRightHand:(float)a0;

@end
