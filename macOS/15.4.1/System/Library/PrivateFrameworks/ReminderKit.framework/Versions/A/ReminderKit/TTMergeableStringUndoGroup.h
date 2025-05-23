@class NSString, NSMutableDictionary, NSMutableArray;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand>

@property (retain, nonatomic) NSMutableDictionary *seen;
@property (retain, nonatomic) NSMutableArray *commands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (void)addCommand:(id)a0;
- (BOOL)addSeenRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0;
- (BOOL)addToGroup:(id)a0;
- (void)applyToString:(id)a0;
- (void)closeGroup;
- (BOOL)hasTopoIDsThatCanChange;

@end
