@class NSString, NSSet, NSNumber, MTInterest;

@interface MTCategory : NSManagedObject

@property (nonatomic) unsigned long long adamID;
@property (nonatomic, copy) NSString *artworkPrimaryColor;
@property (nonatomic, copy) NSString *artworkTemplateURL;
@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, retain) NSNumber *artworkHeightNumber;
@property (nonatomic, retain) NSNumber *artworkWidthNumber;
@property (nonatomic, retain) MTInterest *interest;
@property (nonatomic, copy) NSSet *podcasts;
@property (nonatomic, retain) MTCategory *parent;
@property (nonatomic, copy) NSSet *children;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
