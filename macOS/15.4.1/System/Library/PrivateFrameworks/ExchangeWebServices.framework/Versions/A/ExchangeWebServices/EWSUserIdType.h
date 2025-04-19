@class NSString;

@interface EWSUserIdType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *SID;
@property (copy, nonatomic) NSString *PrimarySmtpAddress;
@property (copy, nonatomic) NSString *DisplayName;
@property (nonatomic) long long DistinguishedUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
