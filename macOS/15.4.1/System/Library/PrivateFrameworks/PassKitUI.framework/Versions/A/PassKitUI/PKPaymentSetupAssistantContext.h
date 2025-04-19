@class NSData, PKPaymentWebServiceContext, NSString;
@protocol PKPaymentSetupDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver;

@interface PKPaymentSetupAssistantContext : NSObject <PKPaymentSetupAssistantContextProtocol>

@property (readonly, nonatomic) unsigned long long setupAssistant;
@property (readonly, nonatomic) BOOL allowsCachedCardRequirements;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly, nonatomic) PKPaymentWebServiceContext *webServiceContext;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (readonly, nonatomic) id<PKPaymentWebServiceArchiver> archiver;
@property (weak, nonatomic) id<PKPaymentSetupDelegate> delegate;
@property (readonly, nonatomic) BOOL isFollowupAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
