@class ABGroup, NSString;

@interface ABRenameGroupCommand : ABCommand {
    ABGroup *_group;
    NSString *_name;
}

- (void).cxx_destruct;
- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)_swapName;
- (id)initWithGroup:(id)a0 newName:(id)a1 addressBook:(id)a2;

@end
