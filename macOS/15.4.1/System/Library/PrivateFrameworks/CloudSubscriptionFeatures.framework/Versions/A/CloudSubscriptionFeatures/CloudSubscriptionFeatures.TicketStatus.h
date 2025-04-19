@class NSString, _TtC25CloudSubscriptionFeatures12TicketStatus;

@interface CloudSubscriptionFeatures.TicketStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ rawValue;
    void /* unknown type, empty encoding */ allowedValues;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *notYetQueued;
@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *enqueued;
@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures12TicketStatus *active;

@property (nonatomic, copy) NSString *rawValue;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
