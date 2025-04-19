@class NSString;

@interface EWSResponseMessageType : NSObject <XSDefinitionProvider>

@property (nonatomic) long long ResponseClass;
@property (copy, nonatomic) NSString *MessageText;
@property (nonatomic) long long ResponseCode;
@property (nonatomic) long long DescriptiveLinkKey;
@property (retain, nonatomic) id MessageXml;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
