@class NSString;

@interface DGSpotPatchSpot : NSObject <NSCopying, NSMutableCopying, DGOperationCoding> {
    struct CGPoint { double x; double y; } _center;
    double _radius;
    double _softness;
    double _opacity;
    double _detail;
    double _angle;
    BOOL _hasPatch;
    struct CGPoint { double x; double y; } _patchCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spotWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 softness:(double)a2 opacity:(double)a3 detail:(double)a4 angle:(double)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (double)opacity;
- (struct CGPoint { double x0; double x1; })center;
- (double)detail;
- (double)angle;
- (double)radius;
- (double)softness;
- (BOOL)hasPatch;
- (struct CGPoint { double x0; double x1; })patchCenter;

@end
