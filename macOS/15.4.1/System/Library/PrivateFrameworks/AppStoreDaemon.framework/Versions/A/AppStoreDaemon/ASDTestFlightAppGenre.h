@class NSString, NSNumber;

@interface ASDTestFlightAppGenre : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *genre;
@property (readonly) NSNumber *genreID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGenre:(id)a0 genreID:(id)a1;

@end
