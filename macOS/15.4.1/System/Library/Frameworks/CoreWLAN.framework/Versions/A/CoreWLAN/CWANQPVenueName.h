@class NSString, NSArray;

@interface CWANQPVenueName : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long venueGroup;
@property (nonatomic) long long venueType;
@property (copy, nonatomic) NSString *localizedVenueGroup;
@property (copy, nonatomic) NSString *localizedVenueType;
@property (copy, nonatomic) NSArray *venueNameList;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
