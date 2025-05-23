@class NSString, NSDictionary;

@interface OSALog : NSObject {
    BOOL _preserveFiles;
}

@property (copy) NSString *oldFilePath;
@property BOOL deleteOnRetire;
@property (readonly) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *stream;
@property (readonly) NSDictionary *metaData;
@property (readonly) NSString *filepath;
@property (readonly) NSString *bugType;

+ (id)createForSubmission:(id)a0 metadata:(id)a1 options:(id)a2 error:(id *)a3 writing:(id /* block */)a4;
+ (void)cleanupForUser:(id)a0;
+ (void)cleanupRetired:(id)a0;
+ (id)additionalRootsInstalled;
+ (id)commonFieldsForBody:(id)a0;
+ (void)createRetiredDirectory:(id)a0;
+ (BOOL)isDataVaultEnabled;
+ (void)iterateLogsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
+ (id)locallyCreateForSubmission:(id)a0 metadata:(id)a1 options:(id)a2 error:(id *)a3 writing:(id /* block */)a4;
+ (id)logObjForBugType:(id)a0;
+ (void)markDescriptor:(int)a0 forKey:(id)a1 withObj:(id)a2;
+ (void)markDescriptor:(int)a0 withPairs:(id)a1 andOptions:(id)a2;
+ (void)markFile:(id)a0 withKey:(const char *)a1 value:(const char *)a2;
+ (void)markPurgeableLevel:(unsigned long long)a0 path:(id)a1;
+ (void)purgeLogs:(id)a0 withReason:(const char *)a1 includeRetired:(BOOL)a2 deleteOnRetire:(BOOL)a3 usingPredicate:(id /* block */)a4;
+ (BOOL)randomlySelectForRetention:(id)a0;
+ (unsigned int)scanLogs:(id)a0 from:(id)a1;
+ (unsigned int)scanLogs:(id)a0 from:(id)a1 options:(id)a2;
+ (id)scanProxies:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 options:(id)a1 error:(id *)a2;
- (void)rename:(id)a0;
- (void)closeFileStream;
- (BOOL)retire:(const char *)a0;
- (id)initWithFilepath:(id)a0 type:(id)a1;
- (id)initWithPath:(id)a0 forRouting:(id)a1 options:(id)a2;
- (id)initWithPath:(id)a0 forRouting:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithPath:(id)a0 forRouting:(id)a1 usingConfig:(id)a2 options:(id)a3 error:(id *)a4;
- (id)initWithType:(id)a0 filepath:(id)a1 metadata:(id)a2 options:(id)a3 at:(double)a4 error:(id *)a5;
- (BOOL)isReasonableSize:(long long)a0 forRouting:(id)a1;
- (void)markWithKey:(const char *)a0 value:(const char *)a1;

@end
