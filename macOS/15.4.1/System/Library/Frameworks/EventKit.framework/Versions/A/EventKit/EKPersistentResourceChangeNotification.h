@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;

- (id)lastModifiedDate;
- (void)setLastModifiedDate:(id)a0;
- (int)entityType;
- (id)resourceChanges;
- (void)setResourceChanges:(id)a0;

@end
