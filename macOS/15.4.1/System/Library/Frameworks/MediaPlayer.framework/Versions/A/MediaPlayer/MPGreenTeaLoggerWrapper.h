@interface MPGreenTeaLoggerWrapper : NSObject

- (void)beginLogAccessInterval;
- (void)endLogAccessInterval;
- (id)initWithAccessorName:(id)a0;
- (void)logAccess;

@end
