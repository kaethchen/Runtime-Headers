@class NSString, NSDictionary, CoreCECDevice, CoreCECPhysicalDevice, CECEDIDAttributes;

@interface CoreCECBus : CoreRCBus

@property (readonly, nonatomic) NSDictionary *analyticsContext;
@property (nonatomic) BOOL hasLink;
@property (nonatomic) unsigned short physicalAddress;
@property (copy, nonatomic) CECEDIDAttributes *edidAttributes;
@property (nonatomic) unsigned short streamPath;
@property (nonatomic) struct CECOSDName { unsigned char length; unsigned char characters[14]; } osdNameASCII;
@property (nonatomic) struct CECLanguage { unsigned char characters[3]; } tvLanguageCodeASCII;
@property (nonatomic) unsigned long long systemAudioModeStatus;
@property (readonly, nonatomic) unsigned short lastStreamPath;
@property (readonly, nonatomic) CoreCECDevice *activeSource;
@property (readonly, nonatomic) NSString *osdName;
@property (readonly, nonatomic) NSString *tvLanguageCode;
@property (readonly, nonatomic) CoreCECPhysicalDevice *rootPhysicalDevice;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)mergeProperties;
- (id)osdName;
- (id)activeSource;
- (id)addDeviceWithAttributes:(id)a0 error:(id *)a1;
- (id)deviceOnBusWithLogicalAddress:(unsigned char)a0;
- (void)didChangeActiveSourceFrom:(id)a0 to:(id)a1;
- (void)didChangeLinkState:(BOOL)a0 physicalAddress:(unsigned short)a1;
- (void)didUpdateProperties:(id)a0;
- (id)initWithBus:(id)a0;
- (id)initWithLinkState:(BOOL)a0 physicalAddress:(unsigned short)a1;
- (void)notifyDelegateLinkStateUpdated;
- (void)removeDeviceWithType:(unsigned long long)a0;
- (id)rootPhysicalDevice;
- (void)setLinkState:(BOOL)a0 physicalAddress:(unsigned short)a1;
- (BOOL)setOSDName:(id)a0 error:(id *)a1;
- (BOOL)setTvLanguageCode:(id)a0 error:(id *)a1;
- (id)tvLanguageCode;

@end
