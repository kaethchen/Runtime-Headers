@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setOwner:(id)a0;
- (id)externalRepresentation;
- (id)owner;
- (id)externalID;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (void)setExternalRepresentation:(id)a0;
- (int)entityType;
- (id)externalFolderID;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)a0;
- (void)setExternalScheduleID:(id)a0;

@end
