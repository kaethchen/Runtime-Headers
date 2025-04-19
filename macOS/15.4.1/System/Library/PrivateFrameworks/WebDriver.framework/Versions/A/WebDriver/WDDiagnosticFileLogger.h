@interface WDDiagnosticFileLogger : DDFileLogger

@property (nonatomic) BOOL acceptsMessages;

- (void)logMessage:(id)a0;
- (id)initWithLogFileManager:(id)a0;

@end
