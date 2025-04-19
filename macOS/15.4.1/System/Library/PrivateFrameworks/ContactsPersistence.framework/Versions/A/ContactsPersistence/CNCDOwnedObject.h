@class NSString, ABCDRecord, NSNumber;

@interface CNCDOwnedObject : NSManagedObject

@property (retain, nonatomic) ABCDRecord *owner;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSNumber *isPrimary;
@property (retain, nonatomic) NSNumber *orderingIndex;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) int iOSLegacyIdentifier;

+ (id)insertOwnedObjectWithEntityName:(id)a0 inManagedObjectContext:(id)a1;

- (void)didChangeValueForKey:(id)a0;
- (void)willChangeValueForKey:(id)a0;
- (void)prepareForDeletion;
- (id)cacheKey;
- (void)setUniqueId:(id)a0;
- (void)touch:(id)a0;

@end
