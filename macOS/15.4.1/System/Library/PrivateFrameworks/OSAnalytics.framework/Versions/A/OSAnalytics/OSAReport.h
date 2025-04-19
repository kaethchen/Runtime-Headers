@class NSString, NSMutableArray, NSMutableDictionary;

@interface OSAReport : NSObject {
    NSString *_incidentID;
    NSString *_logType;
    NSMutableDictionary *_logWritingOptions;
}

@property (readonly, nonatomic) double capture_time;
@property (readonly, nonatomic) NSMutableArray *notes;
@property (readonly, nonatomic) NSString *logfile;
@property (retain, nonatomic) NSString *etlKey;
@property (readonly) NSString *oldLogFile;

+ (id)bootArgs;
+ (id)bootSessionUUID;
+ (unsigned int)codeSigningMonitor;
+ (unsigned char)executeWithTimeout:(unsigned int)a0 Code:(id /* block */)a1;
+ (id)findBundleAtPath:(id)a0 withKeys:(id)a1 bundleURL:(inout id *)a2;
+ (id)kernelVersionDescription;
+ (id)reduceToTwoSigFigures:(unsigned long long)a0;
+ (id)systemIDWithDescription:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)problemType;
- (BOOL)isAppleTV;
- (BOOL)isActionable;
- (id)incidentID;
- (BOOL)saveWithOptions:(id)a0;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)additionalIPSMetadata;
- (id)appleCareDetails;
- (double)captureTime;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)getSyslogForPids:(id)a0 andOptionalSenders:(id)a1 additionalPredicates:(id)a2;
- (id)reportNamePrefix;
- (void)symlink:(id)a0;

@end
