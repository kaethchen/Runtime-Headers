@interface SiriUIDismissalOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long dismissalReason;

+ (id)optionsWithDismissalReason:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDismissalReason:(unsigned long long)a0;

@end
