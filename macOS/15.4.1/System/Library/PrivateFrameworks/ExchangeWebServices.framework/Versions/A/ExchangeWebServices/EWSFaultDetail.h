@class NSString, NSNumber, EWSFaultDetailMessageXML;

@interface EWSFaultDetail : SOAPFaultDetail <XSDefinitionProvider>

@property (readonly, nonatomic) long long ResponseCode;
@property (readonly, copy, nonatomic) NSString *Message;
@property (readonly, nonatomic) NSNumber *Line;
@property (readonly, nonatomic) NSNumber *Position;
@property (readonly, nonatomic) EWSFaultDetailMessageXML *MessageXml;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
