@interface CRTTMergeableStringIndex : NSObject

@property (nonatomic) long long renameGeneration;
@property (readonly, nonatomic) long long maxCounter;
@property (readonly, nonatomic) unsigned long long affinity;
@property (readonly, nonatomic) struct TopoID { struct TopoReplica { unsigned char uuid[16]; unsigned int index; } replica; unsigned int clock; } index;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)timestamp;
- (id).cxx_construct;
- (id)_objCRenameSequence;
- (id)finalizedInContext:(id)a0;
- (id)initWithTimestamp:(id)a0 affinity:(unsigned long long)a1 renameGeneration:(long long)a2;
- (id)initWithTopoID:(struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; })a0 affinity:(unsigned long long)a1 renameGeneration:(long long)a2 maxCounter:(long long)a3;
- (BOOL)needToFinalizeTimestamps;
- (id)renamed:(id)a0;

@end
