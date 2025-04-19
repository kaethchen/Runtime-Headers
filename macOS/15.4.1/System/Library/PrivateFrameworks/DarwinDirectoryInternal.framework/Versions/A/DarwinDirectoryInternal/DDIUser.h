@class NSUUID, NSString, NSMutableSet;

@interface DDIUser : NSObject {
    NSUUID *_uuid;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int uid;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSUUID *primaryGroupUUID;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *homeDirectory;
@property (copy, nonatomic) NSString *shell;
@property (retain, nonatomic) NSMutableSet *memberships;
@property (retain, nonatomic) NSMutableSet *aliases;

+ (id)userWithUUID:(id)a0 uid:(unsigned int)a1 name:(id)a2 primaryGroupUUID:(id)a3 fullName:(id)a4 homeDirectory:(id)a5 shell:(id)a6 memberships:(id)a7;

- (void).cxx_destruct;

@end
