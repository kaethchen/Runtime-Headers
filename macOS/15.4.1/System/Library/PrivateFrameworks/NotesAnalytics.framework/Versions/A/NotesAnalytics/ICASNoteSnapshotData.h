@class NSString, NSArray;

@interface ICASNoteSnapshotData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSArray *noteSnapshotSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteSnapshotSummary:(id)a0;

@end
