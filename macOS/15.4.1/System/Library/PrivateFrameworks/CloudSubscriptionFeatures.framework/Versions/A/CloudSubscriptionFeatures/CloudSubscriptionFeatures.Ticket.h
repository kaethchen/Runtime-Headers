@class NSString;

@interface CloudSubscriptionFeatures.Ticket : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ ticket;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *ticket;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ status;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
