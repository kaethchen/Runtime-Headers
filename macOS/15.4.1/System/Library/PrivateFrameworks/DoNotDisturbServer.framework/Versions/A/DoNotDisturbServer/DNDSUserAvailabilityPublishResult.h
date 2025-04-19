@class NSString, AKAvailability;

@interface DNDSUserAvailabilityPublishResult : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) AKAvailability *availability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 availability:(id)a1;

@end
