@class NSString;

@interface TRISysdiagnoseLogWriter : NSObject

@property (readonly, nonatomic) NSString *outputDirectory;

- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0;
- (BOOL)writeSysdiagnoseInfoForProvider:(id)a0 error:(id *)a1;

@end
