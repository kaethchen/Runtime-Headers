@class OSALanguage;
@protocol AMActionRunnerProtocol;

@interface AMSendProc : NSObject

@property (retain) id<AMActionRunnerProtocol> runner;
@property (retain) OSALanguage *language;
@property void /* function */ *sendProc;
@property void /* function */ *oldSendProc;
@property void *oldRefCon;

+ (void)initialize;

- (void).cxx_destruct;
- (void)cleanUp;
- (id)initWithRunner:(id)a0 forLanguage:(id)a1;

@end
