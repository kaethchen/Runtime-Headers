@class NSString, NSURL, NSDate;

@interface TVRCPerson : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bio;
@property (readonly, nonatomic) NSString *birthplace;
@property (readonly, nonatomic) NSDate *birthDate;
@property (readonly, nonatomic) NSDate *deathDate;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *imageURLTemplate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;

+ (id)personWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_urlFromString:(id)a0;
- (id)_dateFromNumber:(id)a0;
- (id)_formattedDateWithDate:(id)a0;
- (id)formattedAge;
- (id)formattedBirthDate;
- (id)formattedDeathDate;

@end
