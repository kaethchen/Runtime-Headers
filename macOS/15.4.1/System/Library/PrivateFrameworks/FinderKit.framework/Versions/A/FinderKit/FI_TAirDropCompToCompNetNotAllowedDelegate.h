@class NSString;

@interface FI_TAirDropCompToCompNetNotAllowedDelegate : NSObject <FI_TAirDropNotAvailableDelegateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buttonTitle;
- (void)actionButtonPressed:(id)a0;
- (id)explanationText;

@end
