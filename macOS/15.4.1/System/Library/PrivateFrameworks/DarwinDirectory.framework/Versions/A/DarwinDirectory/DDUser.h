@class NSUUID, NSString, NSSet, DDGroup;

@interface DDUser : NSObject {
    void /* unknown type, empty encoding */ _user;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic) unsigned int uid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *homeDirectory;
@property (nonatomic, retain) DDGroup *primaryGroup;
@property (nonatomic, copy) NSString *shell;
@property (nonatomic, copy) NSSet *aliases;
@property (nonatomic, copy) NSSet *memberships;

+ (id)userWithName:(id)a0 fullName:(id)a1 primaryGroup:(id)a2;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)userWithName:(id)a0 fullName:(id)a1 primaryGroup:(id)a2;

@end
