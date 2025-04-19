@class NSString, _TtC14IdentityLookup21LiveLookupDBExtension, NSDate;

@interface IdentityLookup.BlockingInfo : NSManagedObject

@property (nonatomic, copy) NSDate *expiration;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) BOOL shouldBlock;
@property (nonatomic, retain) _TtC14IdentityLookup21LiveLookupDBExtension *dbExtension;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
