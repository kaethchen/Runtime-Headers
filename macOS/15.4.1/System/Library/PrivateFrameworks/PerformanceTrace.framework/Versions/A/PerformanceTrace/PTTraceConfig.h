@class NSString, NSXPCConnection, NSURL, NSArray, NSObject, NSMutableArray;
@protocol OS_os_transaction;

@interface PTTraceConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *planNameOrPath;
@property (nonatomic) BOOL overrideIncludeOSSignposts;
@property (nonatomic) BOOL overrideIncludeOSLogs;
@property (nonatomic) BOOL overrideSymbolicate;
@property (retain, nonatomic) NSString *traceRecordEndNotificationName;
@property (retain, nonatomic) NSObject<OS_os_transaction> *tracingActiveTransaction;
@property (nonatomic) BOOL symbolicate;
@property (nonatomic) unsigned long long callstackSamplingRateMS;
@property (retain, nonatomic) NSMutableArray *traceGroups;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long traceType;
@property (retain, nonatomic) NSURL *traceDirectoryURL;
@property (retain, nonatomic) NSString *traceName;
@property (nonatomic) int ownerPID;
@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) BOOL compressWhenFinished;
@property (nonatomic) BOOL includeOSLogs;
@property (nonatomic) BOOL includeOSSignposts;
@property (nonatomic) unsigned long long traceTimeoutS;
@property (nonatomic) unsigned long long traceDurationSecs;
@property (nonatomic) BOOL skipNotification;
@property (nonatomic) BOOL useTraceRecord;
@property (nonatomic) BOOL includeKernelStacks;
@property (nonatomic) unsigned long long kernelBufferSizeMB;
@property (nonatomic) unsigned int kernelBufferDrainQoS;
@property (nonatomic) unsigned long long kernelBufferDrainRateMS;
@property (nonatomic) BOOL enableSwiftUITracing;
@property (retain, nonatomic) NSArray *traceRecordArgs;

+ (id)_defaultTraceRecordConfig;
+ (id)configWithDictionary:(id)a0;
+ (id)configWithTemplate:(unsigned long long)a0;
+ (id)configWithTracePlanName:(id)a0;
+ (id)configWithTracePlanURL:(id)a0;
+ (id)getCurrentConfig;
+ (BOOL)resetConfig;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initConnection;
- (id)_getRemoteObjectProxy;
- (void)_invalidateSession;
- (BOOL)storeConfig;
- (BOOL)validateConfig;

@end
