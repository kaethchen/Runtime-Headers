@class SMCopyEngine, SMWindowsMacPathMapper;

@interface SMWindowsMigrateComponentStep : SMEngineStep

@property (retain) SMCopyEngine *fileCopyEngine;
@property (retain) SMWindowsMacPathMapper *windowsMacPathMap;

- (void).cxx_destruct;
- (void)cancel;
- (id)process;
- (id)prepare;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (id)initWithEngine:(id)a0 map:(id)a1;

@end
