@class SMWindowsMacPathMapper, SMWindowsComponent;

@interface SMCopyEngineWindowsCopier : SMCopyEngineCopier

@property (retain) SMWindowsComponent *windowsComponent;
@property unsigned long long quantityDataReceived;
@property (retain) id context;
@property (retain) SMWindowsMacPathMapper *windowsMacPathMap;

- (id)description;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)a0;
- (void)copyAction:(id)a0 finishedFile:(id)a1 length:(unsigned long long)a2;
- (id)copyAction:(id)a0 pathForXMURLString:(id)a1;
- (void)copyAction:(id)a0 updatedFile:(id)a1 partialLength:(unsigned long long)a2;
- (BOOL)copyActionShouldContinue:(id)a0;
- (BOOL)copyActionShouldFail:(id)a0;
- (BOOL)copyComponent:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)copyPathForXMURLString:(id)a0 sandboxed:(BOOL)a1;
- (BOOL)createLocalizedDirectoryAtPath:(id)a0 localizedName:(id)a1 attributes:(id)a2 error:(id *)a3;
- (BOOL)preProcessReturningError:(id *)a0;
- (BOOL)processReturningError:(id *)a0;
- (id)rootPathForUser:(id)a0 sandboxed:(BOOL)a1;

@end
