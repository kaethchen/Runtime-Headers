@class NSUUID;

@interface RS3DSurface : NSObject <NSCopying, NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _polygon;
    struct vector<RSEdgeStateType, std::allocator<RSEdgeStateType>> { char *__begin_; char *__end_; struct __compressed_pair<RSEdgeStateType *, std::allocator<RSEdgeStateType>> { char *__value_; } __end_cap_; } _polygonEdgeStates;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _polygonEdgeConfidence;
    struct vector<RSEdgeSideType, std::allocator<RSEdgeSideType>> { char *__begin_; char *__end_; struct __compressed_pair<RSEdgeSideType *, std::allocator<RSEdgeSideType>> { char *__value_; } __end_cap_; } _polygonEdgeSides;
    unsigned char type;
    char individualUpdate;
    BOOL merged;
    BOOL removed;
    float confidence;
    unsigned int groupId;
    int wallStatus;
    int parentWallStatus;
    struct { char states[4]; } edgeStates;
    float offset;
    float depth;
    float depthWeight;
    NSUUID *identifier;
    NSUUID *parentIdentifier;
    unsigned long long room_id;
    unsigned long long room_class_idx;
    unsigned long long multiroom_all_idx;
    long long storyLevel;
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ normal;
    struct { float confidence[4]; } edgeConfidence;
    void /* unknown type, empty encoding */ appearPosePts;
    void /* unknown type, empty encoding */ appearMajorViews;
    struct { void /* unknown type, empty encoding */ corners[4]; } quad;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly) struct { void /* unknown type, empty encoding */ x0[4]; } quad;
@property (readonly) float confidence;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ color;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *parentIdentifier;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (readonly, nonatomic) struct { char x0[4]; } edgeStates;
@property (readonly, nonatomic) struct { float x0[4]; } edgeConfidence;
@property (readonly, nonatomic) char individualUpdate;
@property (readonly, nonatomic) const void *polygon;
@property (readonly, nonatomic) unsigned long long polygonSize;
@property (readonly, nonatomic) const char *polygonEdgeStates;
@property (readonly, nonatomic) const float *polygonEdgeConfidence;
@property (readonly, nonatomic) const char *polygonEdgeSides;
@property (readonly, nonatomic) long long storyLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)translateBy:(SEL)a0;
- (BOOL)fillWithDictionaryRepresentation:(id)a0;
- (unsigned int)getGroupId;
- (id)initWithDictionaryRepresentation:(id)a0 WithGroupId:(unsigned int)a1;
- (id)initWithQuad:(SEL)a0 withConfidence:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 withColor:(float)a2 withGroupId:(unsigned int)a3 withType:(unsigned char)a4;
- (void)rotateAlongZAxisRightHand:(float)a0;

@end
