@class NSArray, NSMutableDictionary, ABCNContactIdentifier;

@interface ABCNSaveRequest : NSObject {
    NSMutableDictionary *_addedContactsByIdentifier;
    NSMutableDictionary *_updatedContactsByIdentifier;
    NSMutableDictionary *_deletedContactsByIdentifier;
    ABCNContactIdentifier *_meCardIdentifier;
    NSMutableDictionary *_addedGroupsByIdentifier;
    NSMutableDictionary *_updatedGroupsByIdentifier;
    NSMutableDictionary *_deletedGroupsByIdentifier;
}

@property (nonatomic) BOOL unsafeApplyChangesOnly;
@property (readonly, copy, nonatomic) NSArray *addedContactsWithAccount;
@property (readonly, copy, nonatomic) NSArray *updatedContacts;
@property (readonly, copy, nonatomic) NSArray *deletedContacts;
@property (readonly, copy, nonatomic) ABCNContactIdentifier *meCardIdentifier;
@property (readonly, copy, nonatomic) NSArray *addedGroupsWithAccount;
@property (readonly, copy, nonatomic) NSArray *updatedGroups;
@property (readonly, copy, nonatomic) NSArray *deletedGroups;

+ (id)saveRequest;

- (void)dealloc;
- (id)init;
- (void)updateContact:(id)a0;
- (void)addContact:(id)a0 toAccountWithIdentifier:(id)a1;
- (void)addGroup:(id)a0 toAccountWithIdentifier:(id)a1;
- (void)addMember:(id)a0 toGroup:(id)a1;
- (void)addSubgroup:(id)a0 toGroup:(id)a1;
- (void)deleteContact:(id)a0;
- (void)deleteGroup:(id)a0;
- (void)removeMember:(id)a0 fromGroup:(id)a1;
- (void)removeSubgroup:(id)a0 fromGroup:(id)a1;
- (void)setMeCardIdentifier:(id)a0;
- (void)updateGroup:(id)a0;

@end
