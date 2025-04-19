@class CKMergeableValueID, CKDistributedTimestamp;

@interface CKAtomReference : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, copy, nonatomic) CKMergeableValueID *mergeableValueID;
@property (readonly, copy, nonatomic) CKDistributedTimestamp *timestamp;
@property (readonly, copy, nonatomic) CKMergeableValueID *location;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToReference:(id)a0;
- (id)initWithMergeableValueID:(id)a0;
- (id)initWithMergeableValueID:(id)a0 timestamp:(id)a1;
- (id)initWithMergeableValueID:(id)a0 timestamp:(id)a1 type:(unsigned char)a2;

@end
