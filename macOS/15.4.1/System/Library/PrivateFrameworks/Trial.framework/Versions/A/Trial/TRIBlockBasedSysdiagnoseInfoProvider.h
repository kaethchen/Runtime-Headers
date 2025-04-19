@class NSString;

@interface TRIBlockBasedSysdiagnoseInfoProvider : NSObject <TRISysdiagnoseInfoProviding>

@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSString *outputFilename;

- (void).cxx_destruct;
- (id)filename;
- (id)initWithOutputFilename:(id)a0 block:(id /* block */)a1;
- (id)sysdiagnoseLinesWithError:(id *)a0;

@end
