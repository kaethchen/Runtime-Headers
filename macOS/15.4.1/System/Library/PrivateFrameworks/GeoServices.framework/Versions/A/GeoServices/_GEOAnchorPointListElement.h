@class NSUUID, NSMutableSet, GEOComposedRouteAnchorPoint;

@interface _GEOAnchorPointListElement : NSObject <NSSecureCoding> {
    GEOComposedRouteAnchorPoint *_anchorPoint;
    NSUUID *_elementID;
    NSMutableSet *_conjunctElements;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)duplicateWithExistingAnchorPoint:(id)a0;
- (id)initWithAnchorPoint:(id)a0;
- (id)initWithAnchorPoint:(id)a0 conjoinedWith:(id)a1;
- (BOOL)isInConjunctionWith:(id)a0;
- (void)updateWithSnappedAnchorPoint:(id)a0;

@end
