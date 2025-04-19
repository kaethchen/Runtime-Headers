@class NSString, NSDate;

@interface PGCollectionCurationEntry : NSManagedObject

@property (nonatomic, copy) NSString *collectionId;
@property (nonatomic, copy) NSString *keySongAdamID;
@property (nonatomic, copy) NSString *keySongFlexUID;
@property (nonatomic, copy) NSDate *curationDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
