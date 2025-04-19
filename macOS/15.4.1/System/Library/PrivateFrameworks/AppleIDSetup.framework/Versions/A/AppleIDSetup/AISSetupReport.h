@class NSString, NSDictionary, NSArray, AISSetupReportLocaleInfo;

@interface AISSetupReport : NSObject

@property (retain, nonatomic) NSDictionary *accountAltDSIDsByService;
@property (copy, nonatomic) NSString *createdPersonaID;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) AISSetupReportLocaleInfo *peerDeviceLocaleInfo;
@property (retain, nonatomic) NSArray *childReports;

- (void).cxx_destruct;

@end
