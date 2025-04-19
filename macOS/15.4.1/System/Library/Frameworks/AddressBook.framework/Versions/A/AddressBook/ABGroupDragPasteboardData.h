@class NSArray, NSString;

@interface ABGroupDragPasteboardData : NSObject <ABPasteboardData> {
    id _promiseOwner;
}

@property (readonly) NSArray *groupUids;
@property (readonly) NSArray *entryUids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)writeToPasteboard:(id)a0;
- (void)writeGroupUids:(id)a0;
- (void)writeEntryUids:(id)a0;
- (void)declareTypes:(id)a0;
- (id)initWithGroupUids:(id)a0 entryUids:(id)a1 promiseOwner:(id)a2;

@end
