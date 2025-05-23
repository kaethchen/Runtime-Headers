@class NSString, NSArray;

@interface ICASCloudSyncableData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSArray *syncableDataSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSyncableDataSummary:(id)a0;

@end
