@class NSData, NSString;

@interface ULLoggedEventMO : NSManagedObject

@property (retain, nonatomic) NSData *event;
@property (nonatomic) int eventType;
@property (retain, nonatomic) NSString *eventUUID;
@property (nonatomic) double receivedTimestamp;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMicroLocationLoggedEventsTable::Entry> { union { char x0; struct Entry { struct uuid { unsigned char x0[16]; } x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; int x2; struct ReceivedEvent { void /* function */ **x0; struct ReceivedEventAction *x1; struct AppLaunch *x2; struct BacklightOn *x3; struct BatteryChargerConnected *x4; struct ForcedRecording *x5; struct HomeKitAccessory *x6; struct HomeKitScene *x7; struct NowPlaying *x8; struct RecordingRequest *x9; struct TruthLabelDonation *x10; struct LearnModel *x11; struct LearnCompleted *x12; struct SensorsScanComplete *x13; struct StartSpectating *x14; struct StopSpectating *x15; struct ServiceCreate *x16; struct ServiceDelete *x17; struct ServiceConnect *x18; struct ServiceDisconnect *x19; struct ServiceStartUpdating *x20; struct ServiceStopUpdating *x21; struct RequestObservation *x22; struct RequestPrediction *x23; struct MiloInit *x24; struct MotionEvent *x25; struct LegacyThrottle *x26; struct RetrievedLoi *x27; struct TriggerEvent *x28; struct LegacyClientStatusUpdate *x29; struct SpectatingMotionUpdate *x30; struct EnabledStateUpdate *x31; struct ScreenStateUpdate *x32; struct CloudBackupExport *x33; struct CloudBackupImport *x34; struct DataMigration *x35; int x36; unsigned int x37[2]; } x3; } x1; } x0; BOOL x1; })convertToEntry;

@end
