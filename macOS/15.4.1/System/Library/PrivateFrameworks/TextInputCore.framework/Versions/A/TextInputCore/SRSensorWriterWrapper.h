@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>

- (BOOL)isReady;
- (void)write:(id)a0 withTimeStamp:(id)a1;
- (void)writeSessionStats:(id)a0;

@end
