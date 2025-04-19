@class NSUUID, NSString, NSMutableSet;

@interface DDIGroup : NSObject {
    NSUUID *_uuid;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int gid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSMutableSet *nestedGroups;
@property (retain, nonatomic) NSMutableSet *aliases;

+ (id)groupWithUUID:(id)a0 gid:(unsigned int)a1 name:(id)a2 fullName:(id)a3;

- (void).cxx_destruct;

@end
