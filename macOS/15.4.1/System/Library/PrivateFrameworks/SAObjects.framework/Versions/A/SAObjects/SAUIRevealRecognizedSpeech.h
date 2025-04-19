@class NSArray, NSString, SASRecognition;

@interface SAUIRevealRecognizedSpeech : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *asrAlternatives;
@property (copy, nonatomic) NSString *overriddenSpeech;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *speechRecognizedAceId;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
