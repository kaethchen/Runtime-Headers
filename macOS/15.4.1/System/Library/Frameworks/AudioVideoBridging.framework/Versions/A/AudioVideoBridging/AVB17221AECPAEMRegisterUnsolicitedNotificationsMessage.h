@interface AVB17221AECPAEMRegisterUnsolicitedNotificationsMessage : AVB17221AECPAEMMessage

@property (nonatomic) BOOL timeLimited;
@property (readonly, nonatomic) BOOL messageIs2013Format;

+ (id)keyPathsForValuesAffectingMessageIs2013Format;
+ (id)keyPathsForValuesAffectingTimeLimited;

- (void)setTimeLimited:(BOOL)a0;
- (BOOL)timeLimited;
- (BOOL)messageIs2013Format;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned long long)minimumReceivedCommandSpecificLength;

@end
