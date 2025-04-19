@class AXFTextPosition;

@interface AXFTextRange : NSObject <NSCopying>

@property (class, readonly) AXFTextRange *invalidRange;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) AXFTextPosition *start;
@property (readonly, nonatomic) AXFTextPosition *end;
@property (readonly, nonatomic) long long length;
@property (readonly, nonatomic) BOOL isValid;

+ (id)rangeWithLocation:(unsigned long long)a0 length:(unsigned long long)a1;
+ (id)rangeWithMarkerRange:(struct __AXTextMarkerRange { } *)a0 uiElement:(id)a1;
+ (id)rangeSpanningEntireContentOfWebArea:(id)a0;
+ (id)rangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)rangeWithStartMarker:(struct __AXTextMarker { } *)a0 endMarker:(struct __AXTextMarker { } *)a1 uiElement:(id)a2;
+ (id)rangeWithStartPosition:(id)a0 endPosition:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsRange:(id)a0;
- (id)_initInvalidRange;
- (BOOL)_isCompatibleWithRange:(id)a0;
- (struct __AXTextMarkerRange { } *)axTextMarkerRangeValue;
- (BOOL)containsPosition:(id)a0;
- (id)initWithStartPosition:(id)a0 endPosition:(id)a1;
- (BOOL)isEqualToAXFTextRange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeValue;
- (id)rangeByGrowingRangeStartBy:(long long)a0 endBy:(long long)a1 withinLimit:(id)a2;
- (id)rangeByGrowingToContainRange:(id)a0;
- (id)rangeByIntersectingWithRange:(id)a0;

@end
