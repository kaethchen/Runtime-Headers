@class NSUUID, NSDate;

@interface CMVO2MaxInputs : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long fRecordId;
    NSDate *fStartDate;
    double fMets;
    long long fMetSource;
    double fHeartRate;
    double fHeartRateConfidence;
    long long fGradeType;
    double fGrade;
    double fCadence;
    double fPace;
    BOOL fHasGPS;
    BOOL fHasStrideCal;
    long long fWorkoutType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSUUID *workoutSessionId;
@property (readonly, nonatomic) double mets;
@property (readonly, nonatomic) long long metSource;
@property (readonly, nonatomic) double heartRate;
@property (readonly, nonatomic) double heartRateConfidence;
@property (readonly, nonatomic) double grade;
@property (readonly, nonatomic) long long gradeType;
@property (readonly, nonatomic) double cadence;
@property (readonly, nonatomic) double pace;
@property (readonly, nonatomic) BOOL hasGPS;
@property (readonly, nonatomic) BOOL hasStrideCal;
@property (readonly, nonatomic) long long workoutType;

+ (struct VO2MaxInput { unsigned long long x0; unsigned char x1[16]; float x2; double x3; float x4; float x5; double x6; int x7; double x8; BOOL x9; BOOL x10; int x11; long long x12; double x13; double x14; BOOL x15; })VO2MaxInputFromCMVO2MaxInputs:(id)a0;
+ (struct VO2MaxInput { unsigned long long x0; unsigned char x1[16]; float x2; double x3; float x4; float x5; double x6; int x7; double x8; BOOL x9; BOOL x10; int x11; long long x12; double x13; double x14; BOOL x15; })inputFromPreparedStatement:(struct sqlite3_stmt { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSample:(struct VO2MaxInput { unsigned long long x0; unsigned char x1[16]; float x2; double x3; float x4; float x5; double x6; int x7; double x8; BOOL x9; BOOL x10; int x11; long long x12; double x13; double x14; BOOL x15; })a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithRecordId:(unsigned long long)a0 startDate:(id)a1 mets:(double)a2 metSource:(long long)a3 heartRate:(double)a4 heartRateConfidence:(double)a5 gradeType:(long long)a6 grade:(double)a7 cadence:(double)a8 pace:(double)a9 hasGPS:(BOOL)a10 hasStrideCal:(BOOL)a11 workoutType:(long long)a12;

@end
