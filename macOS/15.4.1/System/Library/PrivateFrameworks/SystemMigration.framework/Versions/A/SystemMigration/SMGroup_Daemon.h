@class SMDBEntry;

@interface SMGroup_Daemon : SMGroup

@property (retain) SMDBEntry *backing;

+ (BOOL)remoteGroupShouldOverwriteLocal:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (id)groupID;
- (id)users;
- (id)groupMembers;
- (unsigned int)gid;
- (id)generatedUID;
- (id)nestedGroups;
- (id)entriesForKey:(id)a0;
- (id)groupMembership;
- (id)_initWithEntry:(id)a0;
- (id)_getEntry:(id)a0 atIndex:(int)a1;

@end
