@class NSString, ContextWhitelistFilterLogFormatter;
@protocol DDLogFormatter;

@interface WDDiagnosticLogFormatter : NSObject <DDLogFormatter> {
    id<DDLogFormatter> _formatter;
    ContextWhitelistFilterLogFormatter *_filter;
    NSString *_sessionIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)formatLogMessage:(id)a0;
- (id)initWithContext:(int)a0 formatter:(id)a1 scopedToSession:(id)a2;

@end
