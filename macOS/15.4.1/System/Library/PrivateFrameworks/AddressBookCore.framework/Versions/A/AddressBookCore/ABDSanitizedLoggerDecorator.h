@class NSString;
@protocol ABSuggestionLogging;

@interface ABDSanitizedLoggerDecorator : NSObject <ABSuggestionLogging>

@property (retain, nonatomic) id<ABSuggestionLogging> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithLogger:(id)a0;
- (void)logPairs:(id)a0 withMessage:(id)a1;

@end
