@interface GPTransientProcessInfo : NSObject

@property struct { unsigned int val[8]; } auditToken;
@property (getter=isAutoEDREnabled) BOOL autoEDREnabled;
@property (getter=isGameFullscreen) BOOL isFullscreen;

+ (id)transientProcessInfo;

- (id)init;

@end
