@class NSSet, NSUUID, NSString;

@interface DDQUser : NSObject {
    void /* unknown type, empty encoding */ _user;
}

@property (class, nonatomic, readonly) NSSet *allUsers;
@property (class, nonatomic, readonly) NSSet *mutableUsers;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *homeDirectory;
@property (nonatomic, readonly) unsigned int primaryGroupID;
@property (nonatomic, readonly) NSString *shell;

+ (id)userWithName:(id)a0;
+ (id)userWithUID:(unsigned int)a0;
+ (id)userWithUUID:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)userWithName:(id)a0;
- (id)userWithUID:(unsigned int)a0;
- (id)userWithUUID:(id)a0;

@end
