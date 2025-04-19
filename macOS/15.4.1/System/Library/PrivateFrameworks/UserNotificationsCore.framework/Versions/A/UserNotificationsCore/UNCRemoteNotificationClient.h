@class NSString, NSData;

@interface UNCRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *tokenIdentifier;
@property (copy, nonatomic) NSString *environment;
@property (copy, nonatomic) NSData *lastKnownDeviceToken;

+ (void)initialize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
