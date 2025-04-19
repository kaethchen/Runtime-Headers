@class NSString, NSNumber;

@interface ICASSnapshotTimeData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *lastTimeOfAttemptedSchedule;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithLastTimeOfAttemptedSchedule:(id)a0;

@end
