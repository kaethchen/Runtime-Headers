@class NSString, NSArray, MTRChannelClusterChannelInfoStruct, NSNumber, MTRChannelClusterSeriesInfoStruct;

@interface MTRChannelClusterProgramStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) MTRChannelClusterChannelInfoStruct *channel;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSArray *audioLanguages;
@property (copy, nonatomic) NSArray *ratings;
@property (copy, nonatomic) NSString *thumbnailUrl;
@property (copy, nonatomic) NSString *posterArtUrl;
@property (copy, nonatomic) NSString *dvbiUrl;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *parentalGuidanceText;
@property (copy, nonatomic) NSNumber *recordingFlag;
@property (copy, nonatomic) MTRChannelClusterSeriesInfoStruct *seriesInfo;
@property (copy, nonatomic) NSArray *categoryList;
@property (copy, nonatomic) NSArray *castList;
@property (copy, nonatomic) NSArray *externalIDList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
