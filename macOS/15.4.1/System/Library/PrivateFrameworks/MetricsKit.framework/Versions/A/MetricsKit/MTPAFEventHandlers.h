@class MTMediaActivityEventHandler;

@interface MTPAFEventHandlers : MTEventHandlers

@property (readonly) MTMediaActivityEventHandler *playStart;
@property (readonly) MTMediaActivityEventHandler *playStop;
@property (readonly) MTMediaActivityEventHandler *seekStart;
@property (readonly) MTMediaActivityEventHandler *seekStop;

- (Class)baseDataProviderClass;
- (void)registerDefaultEventHandlers;

@end
