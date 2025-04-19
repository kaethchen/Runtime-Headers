@class NSData, NSString;

@interface WFPersistedSerializedParameters : NSManagedObject

@property (nonatomic) int badgeType;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *queryName;

+ (id)fetchRequest;

@end
