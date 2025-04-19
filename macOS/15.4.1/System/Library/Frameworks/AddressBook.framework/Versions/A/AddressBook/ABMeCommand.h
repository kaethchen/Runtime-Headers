@class ABGroup, NSData, ABPerson;

@interface ABMeCommand : ABCommand {
    ABGroup *_selectedGroup;
    ABPerson *_currentMe;
    ABPerson *_newMe;
    NSData *_currentMeImageData;
    NSData *_newMeImageData;
}

- (void).cxx_destruct;
- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (id)initWithGroup:(id)a0 newMe:(id)a1 addressBook:(id)a2;

@end
