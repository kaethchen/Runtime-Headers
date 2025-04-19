@class NSData, SASRecognition, NSString;

@interface SARDRunPOMMESRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *nlFallbackParse;
@property (copy, nonatomic) NSData *nlUserParses;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *responseVariantResult;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userIdentityClassification;
@property (copy, nonatomic) NSString *utterance;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
