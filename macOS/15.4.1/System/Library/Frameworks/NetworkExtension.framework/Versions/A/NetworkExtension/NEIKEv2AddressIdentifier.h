@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    NWAddressEndpoint *_address;
}

@property (readonly) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)stringValue;
- (unsigned long long)identifierType;
- (id)initWithAddress:(id)a0;
- (id)identifierData;

@end
