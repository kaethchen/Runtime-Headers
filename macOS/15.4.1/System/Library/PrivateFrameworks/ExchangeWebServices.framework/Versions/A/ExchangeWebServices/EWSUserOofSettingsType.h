@class EWSDuration, NSString, EWSReplyBodyType;

@interface EWSUserOofSettingsType : NSObject <XSDefinitionProvider>

@property (nonatomic) long long OofState;
@property (nonatomic) long long ExternalAudience;
@property (retain, nonatomic) EWSDuration *Duration;
@property (retain, nonatomic) EWSReplyBodyType *InternalReply;
@property (retain, nonatomic) EWSReplyBodyType *ExternalReply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
