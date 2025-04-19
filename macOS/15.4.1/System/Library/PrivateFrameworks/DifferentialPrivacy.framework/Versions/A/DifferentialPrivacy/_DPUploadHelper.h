@interface _DPUploadHelper : NSObject

+ (id)writeFileForParsec:(id)a0 inDirectory:(id)a1;
+ (id)submissionFilePathInDirectory:(id)a0 uploadName:(id)a1 forDate:(id)a2 useGMT:(BOOL)a3 suffix:(id)a4;
+ (id)writeFileForDA:(id)a0;
+ (id)writeDediscoSubmission:(id)a0 withReportName:(id)a1 inDirectory:(id)a2;
+ (id)writeFileForDedisco:(id)a0 withReportName:(id)a1;
+ (id)writeFileForParsec:(id)a0;

@end
