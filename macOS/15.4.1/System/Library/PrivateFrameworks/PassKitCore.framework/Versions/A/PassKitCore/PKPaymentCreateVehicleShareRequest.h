@class NSString, NSArray;

@interface PKPaymentCreateVehicleShareRequest : PKPaymentWebServiceRequest {
    NSString *_subcredentialIdentifier;
    unsigned long long _preShareDataType;
    NSArray *_remoteShareRegistrationContainers;
}

- (void).cxx_destruct;
- (id)requestBody;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithSubcredentialIdentifier:(id)a0 preShareDataType:(unsigned long long)a1 remoteShareRegistrationContainers:(id)a2;

@end
