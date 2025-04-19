@class EWSReplyBodyType, EWSEmailAddress, MFEWSSetUserOofSettingsResponseOperation, EWSDuration;

@interface MFEWSSetUserOofSettingsRequestOperation : MFEWSRequestOperation

@property (readonly, nonatomic) long long oofState;
@property (readonly, nonatomic) EWSReplyBodyType *internalReply;
@property (readonly, nonatomic) EWSReplyBodyType *externalReply;
@property (readonly, nonatomic) EWSDuration *duration;
@property (readonly, nonatomic) EWSEmailAddress *emailAddress;
@property (readonly, nonatomic) long long externalAudienceType;
@property (retain, nonatomic) MFEWSSetUserOofSettingsResponseOperation *responseOperation;

- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0 oofState:(long long)a1 internalReply:(id)a2 externalReply:(id)a3 startTime:(id)a4 endTime:(id)a5 externalAudienceType:(long long)a6 gateway:(id)a7 errorHandler:(id)a8;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;

@end
