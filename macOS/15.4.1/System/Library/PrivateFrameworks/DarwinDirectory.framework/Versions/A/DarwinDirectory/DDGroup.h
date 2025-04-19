@class NSUUID, NSString, NSSet;

@interface DDGroup : NSObject {
    void /* unknown type, empty encoding */ _group;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic) unsigned int gid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSSet *aliases;
@property (nonatomic, copy) NSSet *nestedGroups;

+ (id)groupWithName:(id)a0 fullName:(id)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)groupWithName:(id)a0 fullName:(id)a1;

@end
