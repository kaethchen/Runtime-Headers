@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (id)calendar;
- (id)UUID;
- (void)setUUID:(id)a0;
- (id)externalID;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (int)entityType;
- (id)hostURL;
- (void)setHostURL:(id)a0;

@end
