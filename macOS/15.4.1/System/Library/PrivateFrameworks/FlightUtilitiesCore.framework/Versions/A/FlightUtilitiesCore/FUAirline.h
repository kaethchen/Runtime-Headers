@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *IATACode;
@property (retain) NSString *FAACode;
@property (retain) NSString *name;
@property (retain) NSString *phoneNumber;
@property (retain) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
