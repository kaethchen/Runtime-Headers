@interface AudioAnalyticsHWTraceHandleWrapper : NSObject

@property (nonatomic) void **handle;

- (void)dealloc;
- (BOOL)pause;
- (id)initWithSessionID:(unsigned int)a0;

@end
