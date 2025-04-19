@class NSString;

@interface SCRGestureFactory : SCRCGestureFactory

@property (nonatomic) unsigned long long deviceIdentifier;
@property (nonatomic) BOOL isFullyEnabled;
@property (nonatomic) BOOL isBuiltIn;
@property (readonly, copy, nonatomic) NSString *hitRegion;

@end
