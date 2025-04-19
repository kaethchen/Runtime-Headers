@class NSString, NSMutableDictionary, NSData, NSNumber;

@interface WiFiUsageParsedBeacon : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) unsigned int shortSSID;
@property (retain, nonatomic) NSString *apName;
@property (nonatomic) NSNumber *isBeaconAtHeRate;
@property (nonatomic) unsigned short beaconInterval;
@property (nonatomic) unsigned short capabilities;
@property (nonatomic) unsigned char channel;
@property (nonatomic) unsigned char band;
@property (nonatomic) BOOL colocated6Ghz;
@property (nonatomic) BOOL colocated6GhzIsPSC;
@property (nonatomic) BOOL hasHT;
@property (nonatomic) unsigned short htInfo;
@property (nonatomic) unsigned char htAMPDUParams;
@property (nonatomic) unsigned short htExtendedCapabilities;
@property (nonatomic) unsigned int htTxBFCapabilities;
@property (nonatomic) unsigned char htAntennaSelection;
@property (nonatomic) unsigned char htRxNSS;
@property (nonatomic) unsigned char htTxNSS;
@property (nonatomic) BOOL hasVHT;
@property (nonatomic) unsigned int vhtInfo;
@property (nonatomic) unsigned short vhtRxMCSMap;
@property (nonatomic) unsigned short vhtRxMaxRate;
@property (nonatomic) unsigned short vhtTxMCSMap;
@property (nonatomic) unsigned short vhtTxMaxRate;
@property (nonatomic) unsigned char vhtRxNSS;
@property (nonatomic) unsigned char vhtTxNSS;
@property (nonatomic) BOOL hasHE;
@property (retain, nonatomic) NSData *heMACInfo;
@property (retain, nonatomic) NSData *hePHYInfo;
@property (nonatomic) unsigned short heRxMCSMap80MHz;
@property (nonatomic) unsigned short heTxMCSMap80MHz;
@property (nonatomic) unsigned short heRxMCSMap160MHz;
@property (nonatomic) unsigned short heTxMCSMap160MHz;
@property (nonatomic) unsigned short heRxMCSMap8080MHz;
@property (nonatomic) unsigned short heTxMCSMap8080MHz;
@property (nonatomic) unsigned char heRxNSS;
@property (nonatomic) unsigned char heTxNSS;
@property (nonatomic) BOOL hasEHT;
@property (nonatomic) BOOL hasColocatedMLD2G;
@property (nonatomic) BOOL hasColocatedMLD5G;
@property (nonatomic) BOOL hasColocatedMLD6G;
@property (nonatomic) unsigned char ap6gPowerMode;
@property (retain, nonatomic) NSMutableDictionary *taggedIEList;
@property (retain, nonatomic) NSMutableDictionary *vendorIEList;
@property (retain, nonatomic) NSMutableDictionary *extendedIEList;
@property (nonatomic) BOOL parsingSuccessful;
@property (readonly, nonatomic) NSData *htMCSSet;

+ (void)initialize;
+ (id)config;
+ (void)defaults;
+ (id)isValidIE:(unsigned char)a0 ofLen:(unsigned char)a1 withIsExtended:(BOOL)a2;
+ (void)updateConfig;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)parseHE6GHz:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseHTCapa:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseApName:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseHECapa:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (id)initWithBeaconData:(id)a0 andAdditionalMetadata:(id)a1;
- (BOOL)parseBeaconIE:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseDSSS:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseEHTCapa:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseExtendedIE:(unsigned char)a0 from:(char *)a1 length:(unsigned long long)a2 endOfBuffer:(char *)a3;
- (BOOL)parseHTOp:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseNormalIE:(unsigned char)a0 from:(char *)a1 length:(unsigned long long)a2 endOfBuffer:(char *)a3;
- (BOOL)parseRNR:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseSSID:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (BOOL)parseVHTCapa:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;

@end
