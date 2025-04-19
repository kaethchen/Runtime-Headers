@interface ADM_NVRAMConfig : NSObject

+ (id)sharedNVRAMConfig;

- (void)write:(id)a0;
- (void)lookForNetBootServersAndReportTo:(id)a0;
- (void)setStartupFromNetBootImage:(id)a0;
- (void)setStartupFromNetBootImage:(id)a0 reportSuccessTo:(id)a1;
- (BOOL)write:(id)a0 withAuthorization:(id)a1;

@end
