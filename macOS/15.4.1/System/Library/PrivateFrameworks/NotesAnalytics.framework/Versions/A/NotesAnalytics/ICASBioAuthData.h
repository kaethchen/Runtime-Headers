@class NSString, ICASBioAuthType;

@interface ICASBioAuthData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASBioAuthType *bioAuthType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithBioAuthType:(id)a0;

@end
