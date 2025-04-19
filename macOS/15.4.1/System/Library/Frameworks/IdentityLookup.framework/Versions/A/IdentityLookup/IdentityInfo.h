@class NSString, _TtC14IdentityLookup21LiveLookupDBExtension, NSDate;

@interface IdentityInfo : NSManagedObject

@property (nonatomic, copy) NSDate *expiration;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *iconURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int type;
@property (nonatomic, retain) _TtC14IdentityLookup21LiveLookupDBExtension *dbExtension;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
