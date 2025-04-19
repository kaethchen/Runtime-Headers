@protocol AutoBugCaptureProtocol;

@interface CTBClient : NSObject

@property (readonly, nonatomic) id<AutoBugCaptureProtocol> autoBugCaptureHelper;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAutoBugCaptureHelper:(id)a0;
- (id)unpackBootstrappingInfoXMLData:(id)a0 error:(id *)a1;
- (id)unpackCPIMMessageData:(id)a0 error:(id *)a1;
- (id)unpackCPMGroupManagementXMLData:(id)a0 error:(id *)a1;
- (id)unpackChatBotMessageJSONData:(id)a0 options:(struct UnpackOptions { unsigned char x0; BOOL x1; })a1 error:(id *)a2;
- (id)unpackChatBotRenderInformationJSONData:(id)a0 error:(id *)a1;
- (id)unpackClientAuthenticityRequestXMLData:(id)a0 error:(id *)a1;
- (id)unpackFileTransferDescriptorXMLData:(id)a0 error:(id *)a1;
- (id)unpackGeoPushLocationXMLData:(id)a0 error:(id *)a1;
- (id)unpackIMCompositionIndicationXMLData:(id)a0 error:(id *)a1;
- (id)unpackIMDNXMLData:(id)a0 error:(id *)a1;
- (id)unpackIMRevokeXMLData:(id)a0 error:(id *)a1;
- (id)unpackProvisioningXMLData:(id)a0 error:(id *)a1;
- (id)unpackSIPConferenceInfoXMLData:(id)a0 error:(id *)a1;
- (id)unpackSIPResourceListsXMLData:(id)a0 error:(id *)a1;

@end
