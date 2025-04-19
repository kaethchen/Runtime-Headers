@class NSArray, NSString;

@interface ABDAggregateLoggerDecorator : NSObject <ABSuggestionLogging>

@property (retain, nonatomic) NSArray *loggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithLoggers:(id)a0;
- (void)logPairs:(id)a0 withMessage:(id)a1;

@end
