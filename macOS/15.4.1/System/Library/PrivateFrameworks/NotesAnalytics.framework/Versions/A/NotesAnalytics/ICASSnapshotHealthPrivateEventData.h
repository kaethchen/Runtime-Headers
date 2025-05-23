@class NSString;

@interface ICASSnapshotHealthPrivateEventData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *snapshotHealthPrivateSessionID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSnapshotHealthPrivateSessionID:(id)a0;

@end
