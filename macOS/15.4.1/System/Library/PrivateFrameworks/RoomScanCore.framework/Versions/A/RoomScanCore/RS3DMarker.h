@interface RS3DMarker : NSObject {
    float _score;
    void /* unknown type, empty encoding */ _normal;
    struct { void /* unknown type, empty encoding */ corners[4]; } _quad;
}

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } quad;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ normal;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
