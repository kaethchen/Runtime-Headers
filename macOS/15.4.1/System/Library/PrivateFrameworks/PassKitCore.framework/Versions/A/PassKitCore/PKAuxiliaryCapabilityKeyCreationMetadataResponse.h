@class NSArray;

@interface PKAuxiliaryCapabilityKeyCreationMetadataResponse : PKAuxiliaryCapabilityWebServiceResponse {
    NSArray *_entryDicts;
}

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)entriesForCapabilities:(id)a0;

@end
