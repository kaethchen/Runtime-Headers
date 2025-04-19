@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long outgoingRecipientCount;
@property unsigned long long incomingSenderCount;
@property unsigned long long incomingRecipientCount;
@property (copy, nonatomic) NSDate *lastOutgoingRecipientDate;
@property (copy, nonatomic) NSDate *lastIncomingSenderDate;
@property (copy, nonatomic) NSDate *lastIncomingRecipientDate;
@property (copy, nonatomic) NSDate *firstOutgoingRecipientDate;
@property (copy, nonatomic) NSDate *firstIncomingSenderDate;
@property (copy, nonatomic) NSDate *firstIncomingRecipientDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)firstDate:(id)a0 updatedWith:(id)a1;
- (id)firstInteractionDate;
- (double)incomingRecipientTimeInterval;
- (double)incomingSenderTimeInterval;
- (unsigned long long)interactionCount;
- (double)interactionTimeInterval;
- (id)lastDate:(id)a0 updatedWith:(id)a1;
- (id)lastInteractionDate;
- (double)outgoingRecipientTimeInterval;
- (void)updateWithStatistics:(id)a0;

@end
