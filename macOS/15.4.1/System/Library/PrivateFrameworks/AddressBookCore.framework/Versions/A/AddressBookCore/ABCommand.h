@class ABAddressBook;

@interface ABCommand : NSObject {
    BOOL _save;
    ABAddressBook *_addressBook;
}

+ (id)bundle;

- (id)init;
- (void).cxx_destruct;
- (BOOL)save;
- (id)_undoManager;
- (id)addressBook;
- (BOOL)doIt;
- (id)initWithAddressBook:(id)a0;
- (BOOL)performWithActionName:(id)a0;
- (void)redoIt;
- (void)setSave:(BOOL)a0;
- (void)undoIt;
- (id)undoer;

@end
