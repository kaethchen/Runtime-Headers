@class ABGroup, NSMutableArray;

@interface ABGroupCommand : ABCommand {
    NSMutableArray *_records;
    ABGroup *_group;
}

- (void).cxx_destruct;
- (id)addRecordsToGroup;
- (id)initWithGroup:(id)a0 records:(id)a1 addressBook:(id)a2;
- (id)removeRecordsFromGroup;

@end
