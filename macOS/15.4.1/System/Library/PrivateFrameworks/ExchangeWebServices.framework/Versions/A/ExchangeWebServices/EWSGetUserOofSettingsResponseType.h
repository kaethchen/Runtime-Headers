@class NSString, EWSResponseMessageType, EWSUserOofSettingsType;

@interface EWSGetUserOofSettingsResponseType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSResponseMessageType *ResponseMessage;
@property (retain, nonatomic) EWSUserOofSettingsType *OofSettings;
@property (nonatomic) long long AllowExternalOof;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
