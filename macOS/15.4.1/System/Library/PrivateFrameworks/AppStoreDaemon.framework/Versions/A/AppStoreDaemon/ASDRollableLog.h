@class ASDLogFileOptions;

@interface ASDRollableLog : NSObject

@property (readonly) ASDLogFileOptions *logOptions;

- (void).cxx_destruct;
- (void)writeString:(id)a0;
- (id)initWithLogOptions:(id)a0;

@end
