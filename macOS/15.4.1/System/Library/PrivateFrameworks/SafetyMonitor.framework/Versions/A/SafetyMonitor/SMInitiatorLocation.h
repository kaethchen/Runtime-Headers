@class NSUUID, NSDate;

@interface SMInitiatorLocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double hunc;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double vunc;
@property (readonly, copy, nonatomic) NSDate *date;

+ (BOOL)isCLLocationValid:(id)a0;

- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCLLocation:(id)a0;
- (id)initWithIdentifier:(id)a0 latitude:(double)a1 longitude:(double)a2 hunc:(double)a3 altitude:(double)a4 vunc:(double)a5 date:(id)a6;
- (id)outputToDictionary;

@end
