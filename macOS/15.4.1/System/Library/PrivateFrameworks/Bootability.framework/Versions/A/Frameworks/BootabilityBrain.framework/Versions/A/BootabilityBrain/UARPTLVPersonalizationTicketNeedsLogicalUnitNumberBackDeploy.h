@interface UARPTLVPersonalizationTicketNeedsLogicalUnitNumberBackDeploy : UARPMetaDataTLV8BackDeploy

@property (readonly) unsigned char ticketNeedsLogicalUnitNumber;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setTicketNeedsLogicalUnitNumber:(unsigned char)a0;
- (id)tlvValue;

@end
