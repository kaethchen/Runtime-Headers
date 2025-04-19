@class NSString;

@interface ICASSyncHealthPrivateUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *syncHealthPrivateUserID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSyncHealthPrivateUserID:(id)a0;

@end
