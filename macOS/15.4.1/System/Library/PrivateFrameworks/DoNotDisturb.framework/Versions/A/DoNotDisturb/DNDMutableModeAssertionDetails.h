@class NSString, DNDModeAssertionLifetime, NSDate;

@interface DNDMutableModeAssertionDetails : DNDModeAssertionDetails

@property (copy) NSDate *userVisibleEndDate;
@property (copy) NSDate *modeConfigurationModifiedDate;
@property (copy) NSString *identifier;
@property (copy) NSString *modeIdentifier;
@property (copy) DNDModeAssertionLifetime *lifetime;
@property unsigned long long reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentifier:(id)a0;
- (void)setReason:(unsigned long long)a0;
- (void)setLifetime:(id)a0;
- (void)setModeIdentifier:(id)a0;
- (void)setModeConfigurationModifiedDate:(id)a0;
- (void)setUserVisibleEndDate:(id)a0;

@end
