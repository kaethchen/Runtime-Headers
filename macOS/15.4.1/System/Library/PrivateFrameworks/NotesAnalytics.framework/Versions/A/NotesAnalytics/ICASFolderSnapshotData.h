@class NSString, NSArray;

@interface ICASFolderSnapshotData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSArray *folderSnapshotSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithFolderSnapshotSummary:(id)a0;

@end
