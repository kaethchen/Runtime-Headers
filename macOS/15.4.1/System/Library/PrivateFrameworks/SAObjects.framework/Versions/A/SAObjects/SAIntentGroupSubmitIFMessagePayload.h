@class NSData;

@interface SAIntentGroupSubmitIFMessagePayload : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *data;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
