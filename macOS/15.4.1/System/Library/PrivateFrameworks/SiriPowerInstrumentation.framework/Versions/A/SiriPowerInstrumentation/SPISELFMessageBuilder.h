@class POWSchemaProvisionalPOWUsage, SISchemaInstrumentationMessage, POWSchemaProvisionalPOWProcessUsage, POWSchemaProvisionalPOWClientEvent;

@interface SPISELFMessageBuilder : NSObject

@property (retain, nonatomic) POWSchemaProvisionalPOWClientEvent *powClientEventMsg;
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usageMsg;
@property (retain, nonatomic) POWSchemaProvisionalPOWProcessUsage *procUsageMsg;
@property (retain, nonatomic) SISchemaInstrumentationMessage *eventContextMsg;

- (id)init;
- (void).cxx_destruct;
- (void)addContext:(id)a0;
- (void)addProcess:(unsigned char)a0;
- (void)addProcessUsage:(struct SPIResourceUsage { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)addRequestLinkInfoForComponent:(int)a0 identifier:(id)a1;
- (id)buildMessage;

@end
