@class NSString, NSUUID;

@interface STUniquedManagedObject : NSManagedObject

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *sortKey;

- (id)dictionaryRepresentation;
- (void)awakeFromInsert;
- (id)computeUniqueIdentifier;
- (void)updateUniqueIdentifier;

@end
