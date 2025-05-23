@interface STCommunicationConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isCommunicationSafetySendingRestricted;
@property (readonly) BOOL isCommunicationSafetyReceivingRestricted;
@property (readonly) BOOL isCommunicationSafetyNotificationEnabled;
@property (readonly) BOOL isCommunicationSafetyAnalyticsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommunicationSafetySendingRestricted:(BOOL)a0 communicationSafetyReceivingRestricted:(BOOL)a1 communicationSafetyNotificationEnabled:(BOOL)a2 communicationSafetyAnalyticsEnabled:(BOOL)a3;
- (BOOL)isEqualToCommunicationConfiguration:(id)a0;

@end
