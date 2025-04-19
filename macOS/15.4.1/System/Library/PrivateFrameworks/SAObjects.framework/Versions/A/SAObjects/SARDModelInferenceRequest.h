@class NSString, NSData;

@interface SARDModelInferenceRequest : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *inferenceType;
@property (copy, nonatomic) NSData *protobufMessageRequest;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
