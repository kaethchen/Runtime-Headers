@class NSString, NSUUID, NSArray, NSDate;

@interface AVAnnotation : NSObject <NSCopying> {
    NSString *_version;
}

@property (copy, nonatomic, getter=_version, setter=_setVersion:) NSString *version;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBoundingBox;
@property (nonatomic) long long zOrder;
@property (copy, nonatomic) NSArray *representations;

+ (void)initialize;
+ (id)annotationPropertyListToNonDataBindingsArray:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)getJSONData:(id *)a0 representationBinaryDataBindings:(id *)a1;
- (id)initWithJSONData:(id)a0 representationBinaryDataBindings:(id)a1 error:(id *)a2;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
