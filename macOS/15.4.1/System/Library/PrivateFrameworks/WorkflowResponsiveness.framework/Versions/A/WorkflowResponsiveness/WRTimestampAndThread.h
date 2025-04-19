@class NSDate;

@interface WRTimestampAndThread : NSObject

@property (readonly) unsigned long long machContTimeNs;
@property (readonly) NSDate *date;
@property (readonly) int pid;
@property (readonly) unsigned long long threadID;

- (void).cxx_destruct;

@end
