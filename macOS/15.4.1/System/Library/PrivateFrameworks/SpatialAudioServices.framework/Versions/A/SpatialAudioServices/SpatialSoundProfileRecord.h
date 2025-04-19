@class NSData, NSURL;

@interface SpatialSoundProfileRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *soundProfileData;
@property (retain, nonatomic) NSURL *soundProfileFileURL;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
