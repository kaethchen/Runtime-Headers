@class NSString, NSArray;

@interface PhotosControlCommand : NSObject {
    NSString *_invokedName;
    NSArray *_args;
}

+ (id)name;
+ (id)usage;
+ (id)abbreviations;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)longopts;
+ (long long)maximumArgs;
+ (long long)minimumArgs;
+ (const char *)optstring;
+ (id)usagesummary;

- (id)description;
- (id)init;
- (int)run;
- (void).cxx_destruct;
- (id)formatDuration:(double)a0;
- (id)args;
- (void)output:(id)a0;
- (id)dataForPathOrStdin:(id)a0;
- (id)initWithArgc:(int)a0 argv:(char **)a1;
- (id)invokedName;
- (id)libraryURLFromArgument:(id)a0;
- (void)output:(id)a0 arguments:(char *)a1;
- (void)outputCompactJsonObject:(id)a0;
- (void)outputError:(id)a0;
- (void)outputError:(id)a0 arguments:(char *)a1;
- (void)outputErrorWithJsonOutput:(BOOL)a0 format:(id)a1;
- (void)outputJsonObject:(id)a0;
- (BOOL)processArgc:(int)a0 argv:(char **)a1;
- (BOOL)processOption:(int)a0 arg:(id)a1;
- (void)willProcessOptions;
- (BOOL)writeData:(id)a0 toPathOrStdout:(id)a1;

@end
