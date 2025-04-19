@class NSString, NSData;

@interface ULRecordingEventMO : NSManagedObject

@property (retain, nonatomic) NSString *recordingUUID;
@property (nonatomic) double recordingTimestamp;
@property (retain, nonatomic) NSString *loiType;
@property (nonatomic) double receivedTimestamp;
@property (nonatomic) int eventType;
@property (nonatomic) int eventSubType;
@property (retain, nonatomic) NSData *event;
@property (retain, nonatomic) NSString *triggerUUID;
@property (retain, nonatomic) NSString *loiId;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMicroLocationRecordingEventsTable::Entry> { union { char x0; struct Entry { struct uuid { unsigned char x0[16]; } x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x2; struct uuid { unsigned char x0[16]; } x3; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x4; int x5; struct RecordingEvent { void /* function */ **x0; double x1; struct ReceivedEventAction *x2; struct AppLaunch *x3; struct BacklightOn *x4; struct BatteryChargerConnected *x5; struct ForcedRecording *x6; struct HomeKitAccessory *x7; struct HomeKitScene *x8; int x9; BOOL x10; BOOL x11; struct NowPlaying *x12; struct RecordingRequest *x13; struct TruthLabelDonation *x14; struct RepeatedField<int> { int *x0; int x1; int x2; } x15; int x16; int x17; struct AssociatedAccessPointInfo *x18; int x19; unsigned int x20[1]; } x6; struct optional<boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; } x7; } x1; } x0; BOOL x1; })convertToEntry;

@end
