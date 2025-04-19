@interface TVISAmbientXPCEventHandler : NSObject

- (void)start;
- (void)_handleAppleLanguagesChanged;
- (void)_registerXPCEventHandler;

@end
