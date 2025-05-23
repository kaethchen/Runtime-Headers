@class NSArray, NSString;

@interface PKAccountDailyCashDestinationsSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *destinations;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedFooterText;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDestinations:(id)a0 localizedTitle:(id)a1 localizedFooterText:(id)a2;

@end
