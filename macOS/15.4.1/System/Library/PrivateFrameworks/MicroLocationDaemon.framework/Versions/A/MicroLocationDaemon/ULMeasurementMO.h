@class NSData, NSString;

@interface ULMeasurementMO : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int flags;
@property (retain, nonatomic) NSString *recordingUUID;
@property (nonatomic) double scanCFTimestamp;
@property (nonatomic) long long scanMCTimestamp;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMicroLocationMeasurementTable::Entry> { union { char x0; struct Entry { struct uuid { unsigned char x0[16]; } x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; unsigned long long x2; struct Measurement { void /* function */ **x0; double x1; struct WiFiRssi *x2; struct WiFiRange *x3; struct ATVAirplayBluetoothRssi *x4; struct HomeKitBluetoothRssi *x5; struct BleLeechedBeacons *x6; struct UwbRange *x7; int x8; int x9; unsigned int x10[1]; } x3; int x4; } x1; } x0; BOOL x1; })convertToEntry;

@end
