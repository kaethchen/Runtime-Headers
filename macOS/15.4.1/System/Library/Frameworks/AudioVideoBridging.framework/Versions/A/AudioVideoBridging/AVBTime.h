@class AVBPTPTime, AVBGPSTime, NSDate;

@interface AVBTime : NSObject <NSCopying> {
    BOOL _initedWithPTP;
    unsigned long long _grandmasterIdentity;
    unsigned short _localPortNumber;
    BOOL _timeTraceable;
    BOOL _frequencyTraceable;
}

@property (readonly, nonatomic) unsigned long long nanosecondsSinceEpoch;
@property (readonly, copy, nonatomic) NSDate *utcDate;
@property (readonly, copy, nonatomic) NSDate *taiDate;
@property (readonly, copy, nonatomic) AVBGPSTime *gpsTime;
@property (readonly, copy, nonatomic) AVBPTPTime *ptpTime;

+ (id)timeConverter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)utcDate;
- (id)taiDate;
- (id)gpsTime;
- (id)initWithGPSTime:(id)a0;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)a0;
- (id)initWithTAIDate:(id)a0;
- (id)initWithUTCDate:(id)a0;
- (long long)nanosecondsSinceTime:(id)a0;
- (id)timeByAddingNanoseconds:(long long)a0;
- (id)ptpTime;
- (id)initWithPTPTime:(id)a0;

@end
