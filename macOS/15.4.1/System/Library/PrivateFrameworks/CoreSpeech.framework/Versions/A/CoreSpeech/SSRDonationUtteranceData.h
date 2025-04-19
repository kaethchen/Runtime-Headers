@class NSString;

@interface SSRDonationUtteranceData : NSObject

@property (readonly, nonatomic) NSString *donationId;
@property (readonly, nonatomic) unsigned long long triggerPhrase;
@property (readonly, nonatomic) NSString *locale;

- (void).cxx_destruct;
- (id)initWithDonationInfoString:(id)a0 locale:(id)a1;

@end
