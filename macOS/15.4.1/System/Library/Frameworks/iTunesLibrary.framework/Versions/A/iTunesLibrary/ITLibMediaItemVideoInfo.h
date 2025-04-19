@class NSString;

@interface ITLibMediaItemVideoInfo : NSObject

@property (copy, nonatomic) NSString *series;
@property (copy, nonatomic) NSString *sortSeries;
@property (nonatomic) unsigned long long season;
@property (copy, nonatomic) NSString *episode;
@property (nonatomic) long long episodeOrder;
@property (nonatomic, getter=isHD) BOOL hd;
@property (nonatomic) unsigned long long videoWidth;
@property (nonatomic) unsigned long long videoHeight;

- (void).cxx_destruct;

@end
