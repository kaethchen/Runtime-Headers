@class NSString, NSNumber;

@interface ICASDeviceSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) NSNumber *bioAuthEnabled;
@property (readonly, nonatomic) NSNumber *localNotesEnabled;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSNumber *audioTranscriptEnabled;
@property (readonly, nonatomic) NSNumber *audioSummaryEnabled;
@property (readonly, nonatomic) NSNumber *mathTextEnabled;
@property (readonly, nonatomic) NSNumber *mathHandwritingEnabled;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithDeviceModel:(id)a0 devicePlatform:(id)a1 bioAuthEnabled:(id)a2 localNotesEnabled:(id)a3 osVersion:(id)a4 deviceID:(id)a5 audioTranscriptEnabled:(id)a6 audioSummaryEnabled:(id)a7 mathTextEnabled:(id)a8 mathHandwritingEnabled:(id)a9;

@end
