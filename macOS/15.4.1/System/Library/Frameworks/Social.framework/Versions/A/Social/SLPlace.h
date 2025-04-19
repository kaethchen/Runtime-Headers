@class NSString, NSURL;

@interface SLPlace : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSURL *pictureURL;
@property (retain) NSString *category;
@property double latitude;
@property double longitude;
@property double distance;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodableProperties;

@end
