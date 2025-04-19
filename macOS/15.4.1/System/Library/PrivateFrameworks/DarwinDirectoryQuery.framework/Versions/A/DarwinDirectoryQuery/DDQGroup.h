@class NSSet, NSUUID, NSString;

@interface DDQGroup : NSObject {
    void /* unknown type, empty encoding */ _group;
}

@property (class, nonatomic, readonly) NSSet *allGroups;
@property (class, nonatomic, readonly) NSSet *mutableGroups;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) unsigned int gid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSSet *members;

+ (id)groupWithUUID:(id)a0;
+ (id)groupWithName:(id)a0;
+ (id)groupWithGID:(unsigned int)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)groupWithUUID:(id)a0;
- (id)groupWithName:(id)a0;
- (id)groupWithGID:(unsigned int)a0;

@end
