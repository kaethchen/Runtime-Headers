@interface MOTracing : MOLoggingStore {
    int _token;
}

+ (id)flattenObjects:(id)a0;
+ (id)flattenIndexPaths:(id)a0;
+ (id)flattenIndexSet:(id)a0;
+ (void)logMessageWithFunction:(const char *)a0 file:(const char *)a1 line:(int)a2 facility:(const char *)a3 aslmesssage:(struct __asl_object_s { } *)a4 format:(id)a5;
+ (void)logMessageWithFunction:(const char *)a0 file:(const char *)a1 line:(int)a2 facility:(const char *)a3 aslmesssage:(struct __asl_object_s { } *)a4 format:(id)a5 arguments:(char *)a6;
+ (id)sharedTracing;

- (void)dealloc;
- (void)_updateUserDefaults;

@end
