@class NSArray, NSNumber;

@interface PGMusicCurationSpecificationOptions : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *titles;
@property (readonly, copy, nonatomic) NSArray *artists;
@property (readonly, copy, nonatomic) NSArray *genres;
@property (readonly, copy, nonatomic) NSNumber *length;
@property (readonly, copy, nonatomic) NSArray *moodsText;
@property (readonly, copy, nonatomic) NSArray *phMoods;
@property (readonly, nonatomic) BOOL isTrip;
@property (readonly, nonatomic) BOOL shouldDownloadKeyFlexSong;
@property (readonly, nonatomic) BOOL isQUEmpty;

+ (unsigned long long)PHMemoryMoodFromNumber:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0;

@end
