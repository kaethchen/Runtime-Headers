@class NSString, SKStatusPayload, NSDate;

@interface SKStatusPublishRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SKStatusPayload *statusPayload;
@property (nonatomic) BOOL isScheduledRequest;
@property (retain, nonatomic) NSString *statusUniqueIdentifier;
@property (retain, nonatomic) NSDate *dateCreated;
@property (nonatomic) BOOL isSecondaryDeviceRepublish;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatusPayload:(id)a0;
- (id)initWithStatusPayload:(id)a0 isScheduledRequest:(BOOL)a1;

@end
