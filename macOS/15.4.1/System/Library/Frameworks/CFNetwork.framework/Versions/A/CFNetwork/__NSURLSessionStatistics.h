@class NSUUID, NSMutableDictionary, NSArray;

@interface __NSURLSessionStatistics : NSObject {
    void *report;
    NSMutableDictionary *_dictionaryReport;
}

@property (readonly, nonatomic) NSMutableDictionary *dictionaryReport;
@property (readonly, nonatomic) NSUUID *nwActivity;
@property (readonly, nonatomic) NSUUID *taskUUID;
@property (readonly, nonatomic) NSArray *connectionUUIDS;
@property (retain) NSUUID *externallyVisibleNwActivity;
@property (retain) NSArray *externallyVisibleConnectionUUIDs;

+ (struct CFNetworkTaskMetrics_s { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; long long x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned char x8[16]; unsigned char x9[16]; int x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; long long x7; long long x8; long long x9; int x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; long long x15; unsigned long long x16; BOOL x17; unsigned char x18; int x19; } x15[0]; } *)createCFNetworkTaskMetrics_s:(id)a0;
+ (void)reportMetricsToSymptoms:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCFNetworkReport:(void *)a0 length:(long long)a1;
- (id)initWithJSONData:(id)a0;

@end
