@class SMWindowsMacPathMapper;

@interface SMWindowsImportUserDataStep : SMEngineStep

@property (retain) SMWindowsMacPathMapper *windowsMacPathMap;

- (void).cxx_destruct;
- (id)prepare;
- (id)importDataForUsername:(id)a0 userID:(long long)a1 homeDirectory:(id)a2 parameters:(id)a3;
- (id)initWithEngine:(id)a0 map:(id)a1;
- (id)postProcess;

@end
