@class NSSet, STScreenTimeSettings;

@interface STCoreOrganization : NSManagedObject

@property (retain, nonatomic) NSSet *enqueuedPayloads;
@property (retain, nonatomic) NSSet *pendingPayloads;
@property (retain, nonatomic) NSSet *recentPayloads;
@property (copy, nonatomic) NSSet *blueprints;
@property (retain, nonatomic) STScreenTimeSettings *screenTimeSettings;

+ (id)fetchRequest;
+ (Class)internalClassForSerializableClassName:(id)a0;

@end
