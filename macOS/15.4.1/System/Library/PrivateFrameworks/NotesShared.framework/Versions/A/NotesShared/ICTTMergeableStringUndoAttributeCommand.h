@class NSString;

@interface ICTTMergeableStringUndoAttributeCommand : NSObject <ICTTMergeableStringUndoCommand>

@property (readonly, nonatomic) void *attributeRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)addToGroup:(id)a0;
- (void)applyToString:(id)a0;
- (BOOL)hasTopoIDsThatCanChange;

@end
