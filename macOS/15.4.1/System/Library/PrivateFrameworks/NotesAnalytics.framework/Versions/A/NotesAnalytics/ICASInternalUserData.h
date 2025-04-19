@class NSString;

@interface ICASInternalUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *rawUserDSID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithRawUserDSID:(id)a0;

@end
