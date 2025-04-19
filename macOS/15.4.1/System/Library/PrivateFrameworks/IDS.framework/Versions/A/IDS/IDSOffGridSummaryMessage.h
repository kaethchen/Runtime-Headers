@class NSNumber, NSDictionary;

@interface IDSOffGridSummaryMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *totalPendingMessagesCount;
@property (readonly, nonatomic) NSDictionary *pendingCounts;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSummary:(id)a0 totalPendingMessagesCount:(id)a1;

@end
