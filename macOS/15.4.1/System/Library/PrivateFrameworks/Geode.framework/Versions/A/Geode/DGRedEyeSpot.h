@class NSString;

@interface DGRedEyeSpot : NSObject <NSCopying, DGOperationCoding> {
    struct CGPoint { double x; double y; } _center;
    double _radius;
    double _sensitivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spotWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 sensitivity:(double)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (struct CGPoint { double x0; double x1; })center;
- (double)radius;
- (double)sensitivity;
- (BOOL)isAuto;

@end
