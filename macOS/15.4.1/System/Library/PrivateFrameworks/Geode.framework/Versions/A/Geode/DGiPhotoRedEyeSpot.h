@class NSString;

@interface DGiPhotoRedEyeSpot : NSObject <NSCopying, DGOperationCoding> {
    struct CGPoint { double x; double y; } _center;
    double _radius;
    BOOL _isAuto;
    double _interocularDistance;
    double _maxFaceWidth;
    double _currentFaceWidth;
    long long _eyeIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spotWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 isAuto:(BOOL)a2 interocularDistance:(double)a3 maxFaceWidth:(double)a4 currentFaceWidth:(double)a5 eyeIndex:(long long)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (struct CGPoint { double x0; double x1; })center;
- (double)radius;
- (BOOL)isAuto;
- (double)currentFaceWidth;
- (long long)eyeIndex;
- (double)interocularDistance;
- (double)maxFaceWidth;

@end
