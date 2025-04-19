@class NSString, MTEpisode, NSNumber;

@interface MTChapter : NSManagedObject

@property (nonatomic, retain) MTEpisode *episode;
@property (nonatomic) long long episodeAdamID;
@property (nonatomic) long long chapterTypeValue;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSNumber *endTimeNumber;
@property (nonatomic, retain) NSNumber *artworkWidth;
@property (nonatomic, retain) NSNumber *artworkHeight;
@property (nonatomic, copy) NSString *artworkTemplateURL;
@property (nonatomic, copy) NSString *artworkPrimaryColor;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
