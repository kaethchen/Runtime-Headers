@class NSString;

@interface MTRQRCodeSetupPayloadParser : NSObject {
    NSString *_base38Representation;
}

- (void).cxx_destruct;
- (id)initWithBase38Representation:(id)a0;
- (id)populatePayload:(id *)a0;

@end
