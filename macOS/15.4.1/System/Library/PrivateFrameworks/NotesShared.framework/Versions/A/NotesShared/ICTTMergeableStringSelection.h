@class NSString;

@interface ICTTMergeableStringSelection : NSObject <ICTTMergeableStringIDTracker> {
    struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>> { void *__value_; } __end_cap_; } _selectionRanges;
}

@property (readonly, nonatomic) struct TopoID { id x0; unsigned int x1; } minTopoID;
@property (nonatomic) unsigned long long selectionAffinity;
@property (readonly, nonatomic) ICTTMergeableStringSelection *locationOnlySelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithData:(id)a0;
- (id).cxx_construct;
- (id)serialize;
- (id)initWithArchive:(const void *)a0;
- (void *)selectionRanges;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTopoIDsThatCanChange;
- (void)saveToArchive:(void *)a0;

@end
