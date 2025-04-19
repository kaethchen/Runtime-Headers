@interface SSLogManager : NSObject

+ (id)sharedManager;
+ (id)dateFormatter;
+ (id)dateFormatterForFilename;
+ (BOOL)useSyslog;

- (void)logLevel:(unsigned long long)a0 inFunction:(const char *)a1 inFile:(const char *)a2 atLine:(unsigned long long)a3 withFormat:(id)a4;
- (id)_createLogFileWithName:(id)a0 andExtension:(id)a1;
- (void)_markEnd;
- (void)_markStart;
- (void)_sendAuxiliaryFileToASL:(id)a0 withName:(id)a1;
- (void)_sendStringToOSLog:(id)a0 withLevel:(long long)a1;
- (void)logLevel:(unsigned long long)a0 inFunction:(const char *)a1 inFile:(const char *)a2 atLine:(unsigned long long)a3 forData:(id)a4 toFilename:(id)a5;
- (void)logLevel:(unsigned long long)a0 inFunction:(const char *)a1 inFile:(const char *)a2 atLine:(unsigned long long)a3 forPlist:(id)a4 toFilename:(id)a5;
- (void)logLevel:(unsigned long long)a0 inFunction:(const char *)a1 inFile:(const char *)a2 atLine:(unsigned long long)a3 forRequest:(id)a4 toFilename:(id)a5;
- (void)logLevel:(unsigned long long)a0 inFunction:(const char *)a1 inFile:(const char *)a2 atLine:(unsigned long long)a3 forResponse:(id)a4 toFilename:(id)a5;
- (void)logLevel:(unsigned long long)a0 inFunction:(const char *)a1 inFile:(const char *)a2 atLine:(unsigned long long)a3 withString:(id)a4;
- (void)manageAppStoreLogOrder:(id)a0;
- (void)manageAppStoreLogs:(id)a0 withPath:(id)a1;

@end
