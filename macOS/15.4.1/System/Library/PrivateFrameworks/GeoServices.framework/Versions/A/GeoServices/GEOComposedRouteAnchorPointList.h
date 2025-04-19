@class NSArray, GEOComposedRouteAnchorPoint, NSMutableArray, geo_isolater;

@interface GEOComposedRouteAnchorPointList : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding> {
    NSMutableArray *_elements;
    geo_isolater *_anchorPointsIsolater;
    unsigned long long _mutationsCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *anchorPoints;
@property (readonly, nonatomic) BOOL startAndEndAreTheSame;
@property (readonly, nonatomic) BOOL isOutAndBackAllowed;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) GEOComposedRouteAnchorPoint *firstObject;
@property (readonly, nonatomic) GEOComposedRouteAnchorPoint *lastObject;

+ (id)listWithAnchorPoints:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)reverse;
- (id)_elementsCopy;
- (void)_eraseSequentialDuplicateAnchors;
- (id)_existingConjunctElementAtAnchorPointPosition:(id)a0;
- (id)_isolatedDescription;
- (void)_removeElementAtIndex:(unsigned long long)a0;
- (void)_removeFirstAnchorSharingPositionWith:(id)a0 enumerationOptions:(unsigned long long)a1;
- (void)appendAnchorPoint:(id)a0;
- (void)appendAnchorPoints:(id)a0;
- (void)closeLoop;
- (void)createOutAndBack;
- (unsigned long long)indexOfAnchorPoint:(id)a0;
- (id)initWithAnchorPoints:(id)a0;
- (id)nextAnchorPointAfter:(struct { unsigned int x0; float x1; })a0;
- (unsigned long long)nextAnchorPointIndexAfter:(struct { unsigned int x0; float x1; })a0;
- (void)removeAnchorPointAtIndex:(unsigned long long)a0;
- (void)removeAnchorPointWithID:(id)a0;
- (void)removeFirstAnchorSharingPositionWith:(id)a0;
- (void)removeLastAnchorSharingPositionWith:(id)a0;

@end
