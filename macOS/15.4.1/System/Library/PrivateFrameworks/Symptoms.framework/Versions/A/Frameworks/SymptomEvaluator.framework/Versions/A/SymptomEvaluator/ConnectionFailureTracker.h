@class NSString, NSData, NSMutableArray;

@interface ConnectionFailureTracker : NSObject

@property (nonatomic) int numConsecutiveFailures;
@property (nonatomic) double firstConnectionFailTime;
@property (nonatomic) double lastConnectionFailTime;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) BOOL isIPv6;
@property (nonatomic) unsigned int ifIndex;
@property (nonatomic) long long ifType;
@property (retain, nonatomic) NSData *destinationAddress;
@property (retain, nonatomic) NSMutableArray *failedFlows;

- (id)description;
- (void).cxx_destruct;
- (void)_logFailure;
- (void)_reportFailure:(unsigned long long)a0 owner:(id)a1;
- (BOOL)noteInitialSnapshot:(id)a0;

@end
