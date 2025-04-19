@class NSData, CNCDContainer;

@interface CNCDProviderMetadata : NSManagedObject

@property (nonatomic) long long version;
@property (retain, nonatomic) NSData *pageData;
@property (retain, nonatomic) NSData *syncAnchorData;
@property (retain, nonatomic) CNCDContainer *container;

+ (id)insertNewObjectInManagedObjectContact:(id)a0;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
