@class NSString, NSNumber, NSArray;

@interface SMGroup : NSObject

@property (retain) NSString *name;
@property unsigned int gid;
@property (retain) NSNumber *groupID;
@property (retain) NSString *generatedUID;
@property (retain) NSArray *users;
@property (retain) NSArray *groupMembers;
@property (retain) NSArray *groupMembership;
@property (retain) NSArray *nestedGroups;

- (void).cxx_destruct;

@end
