@class NSString;

@interface WFCellularCarrierDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedCarrierName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedMessage;
- (id)initWithDisplayedCarrierName:(id)a0;

@end
