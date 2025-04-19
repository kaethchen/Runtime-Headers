@class NSString;

@interface ABAllGroup : ABSpecialGroup {
    NSString *_remoteLocation;
}

+ (BOOL)_isPublicRecord;
+ (id)allGroup;
+ (id)allGroupForRemoteLocation:(id)a0;
+ (id)specialGroupForAddressBook:(id)a0;

- (void)dealloc;
- (id)description;
- (id)members;
- (id)subgroups;
- (id)valueForProperty:(id)a0;
- (BOOL)addMember:(id)a0;
- (BOOL)removeMember:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (BOOL)removeSubgroup:(id)a0;
- (BOOL)addSubgroup:(id)a0;
- (id)enclosedSubscriptionGroups;
- (id)initWithRemoteLocation:(id)a0;
- (id)initWithRemoteLocation:(id)a0 addressBook:(id)a1;
- (BOOL)isSpecialGroup;
- (void)markRecordWithGroupSubscription:(id)a0;
- (id)membersAndSubgroups;
- (id)remoteLocation;
- (BOOL)removeValueforProperty:(id)a0;

@end
