@class NSOrderedSet, NSArray, PKPaymentProvisioningResponse;

@interface PKProvisionedPassBundle : NSObject

@property (retain, nonatomic) PKPaymentProvisioningResponse *provisioningResponse;
@property (retain, nonatomic) NSOrderedSet *provisionedPasses;
@property (retain, nonatomic) NSArray *moreInfoItems;
@property (nonatomic) BOOL expressModeSetupOptional;
@property (nonatomic) BOOL expressEnabled;
@property (nonatomic) BOOL ampEnrollmentAvailable;

- (id)init;
- (void).cxx_destruct;
- (id)_init;

@end
