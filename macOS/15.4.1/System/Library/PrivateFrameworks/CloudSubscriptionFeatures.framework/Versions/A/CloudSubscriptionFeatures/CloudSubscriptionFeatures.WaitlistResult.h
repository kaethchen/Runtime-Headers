@class NSString, NSArray;

@interface CloudSubscriptionFeatures.WaitlistResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ ticket;
    void /* unknown type, empty encoding */ featureIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *ticket;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ status;
@property (nonatomic, readonly) NSArray *featureIDs;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTicket:(id)a0 status:(id)a1 featureIDs:(id)a2;

@end
