@class NSData;

@interface AVB17221AECPAEMAuthenticateCommand : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) NSData *token;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingToken;

- (id)init;
- (void)setToken:(id)a0;
- (id)token;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
