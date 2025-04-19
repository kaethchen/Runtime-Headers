@class NSString;

@interface ICASSnapshotHealthPrivateDeviceData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *snapshotHealthPrivateDeviceID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSnapshotHealthPrivateDeviceID:(id)a0;

@end
