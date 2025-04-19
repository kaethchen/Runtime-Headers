@class MTPodcast, NSData, MTCategory, NSDate, MTChannel;

@interface MTInterest : NSManagedObject

@property (nonatomic) unsigned long long adamID;
@property (nonatomic) double interestValue;
@property (nonatomic, copy) NSDate *lastUpdatedDate;
@property (nonatomic, copy) NSData *unknownSyncProperties;
@property (nonatomic, retain) MTCategory *category;
@property (nonatomic, retain) MTPodcast *podcast;
@property (nonatomic, retain) MTChannel *channel;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
