@class NSString;

@interface HAPInterfaceConfig : HMFObject

@property (class, readonly, copy) NSString *activeWifiOrEthernetInterfaceName;

+ (id)interfaceNamesWithFamily:(unsigned int)a0 flags:(unsigned int)a1 eflags:(unsigned long long)a2 netTransportType:(unsigned int)a3;

@end
