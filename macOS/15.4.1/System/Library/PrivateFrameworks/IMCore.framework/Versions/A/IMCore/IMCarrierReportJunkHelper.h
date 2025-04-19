@interface IMCarrierReportJunkHelper : NSObject

+ (BOOL)canReportJunkOverCellularServiceOfMessageItem:(id)a0;
+ (void)collectReportJunkMetricsForChatbotJunkMessageItem:(id)a0 totalMessagesInThread:(unsigned long long)a1;
+ (void)collectReportJunkMetricsForJunkMessageItem:(id)a0 junkChatStyle:(unsigned char)a1 totalMessagesInThread:(unsigned long long)a2;
+ (id)createJunkReportMessageBodyTextForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1 serviceName:(id)a2;
+ (id)createJunkReportMessageItemBodyForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1 serviceName:(id)a2;
+ (id)fetchMMSReportJunkCarrierAddressForPhoneNumber:(id)a0 simID:(id)a1;
+ (id)fetchSMSReportJunkCarrierAddressForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)isRCSServiceName:(id)a0;
+ (BOOL)isReportJunkServiceAllowedForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1;
+ (id)jsonSerializeDictionary:(id)a0;
+ (id)jsonSerializeDictionaryStrippingOutMessageContent:(id)a0;
+ (id)junkReportMessageItemForMessageItem:(id)a0 account:(id)a1 junkChatStyle:(unsigned char)a2 serviceName:(id)a3;
+ (id)receiveDateForMessageItem:(id)a0;
+ (id)reportJunkCarrierAddressForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1;
+ (void)setHandleParametersOfMessageItem:(id)a0 usingAccount:(id)a1 usingMessageItem:(id)a2 junkChatStyle:(unsigned char)a3;
+ (BOOL)userInHomeCountryWithDestinationCallerID:(id)a0;
+ (BOOL)validateReportJunkCarrierAddress:(id)a0;
+ (BOOL)wifiCallingEnabledForDestinationCallerID:(id)a0;

@end
