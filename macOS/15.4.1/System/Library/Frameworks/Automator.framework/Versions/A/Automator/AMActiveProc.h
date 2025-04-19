@class OSALanguage;
@protocol AMActionRunnerProtocol;

@interface AMActiveProc : NSObject

@property void *oldRefCon;
@property void /* function */ *oldActiveProc;
@property void /* function */ *activeProc;
@property (retain) id<AMActionRunnerProtocol> runner;
@property (retain) OSALanguage *language;

- (void).cxx_destruct;
- (void)cleanUp;
- (id)initWithRunner:(id)a0 forLanguage:(id)a1;

@end
