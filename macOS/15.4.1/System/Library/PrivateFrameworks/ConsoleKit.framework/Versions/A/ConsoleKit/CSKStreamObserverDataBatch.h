@interface CSKStreamObserverDataBatch : CSKStreamDataBatch <NSCopying>

@property (nonatomic) unsigned long long direction;
@property (nonatomic) long long anchorClosestIndex;
@property (nonatomic) BOOL anchorClosestIndexIsAnchor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToObserverDataBatch:(id)a0;

@end
