@class ABGroup, NSMutableArray;

@interface ABShowAsCommand : ABCommand {
    NSMutableArray *_selectedMembers;
    ABGroup *_selectedGroup;
    long long _personType;
}

- (void).cxx_destruct;
- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)_showAs;
- (id)initWithGroup:(id)a0 members:(id)a1 showAs:(long long)a2 addressBook:(id)a3;

@end
