@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject

@property (readonly, nonatomic) EKSource *source;
@property (copy, nonatomic) NSSet *notifications;

+ (id)knownRelationshipMultiValueKeys;
+ (Class)frozenClass;
+ (BOOL)isWeakRelationship;

- (id)initWithOptions:(id)a0;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)a0;
- (BOOL)save:(id *)a0;
- (void)setSource:(id)a0;
- (BOOL)validate:(id *)a0;
- (void)setExternalID:(id)a0;
- (void)_setNotificationsCollectionFlag;
- (BOOL)_hasNotificationsCollectionFlag;
- (void)addNotification:(id)a0;
- (void)removeNotification:(id)a0;
- (void)setExternalIDTag:(id)a0;

@end
