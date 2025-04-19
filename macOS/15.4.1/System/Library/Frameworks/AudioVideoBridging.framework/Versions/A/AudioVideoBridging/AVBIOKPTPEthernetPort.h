@interface AVBIOKPTPEthernetPort : AVBIOKPTPFDPtPPort

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (int)portType;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForAPI;

@end
