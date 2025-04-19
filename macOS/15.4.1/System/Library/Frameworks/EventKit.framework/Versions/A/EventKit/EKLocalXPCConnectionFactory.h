@class NSString;
@protocol CADTCCPermissionChecker;

@interface EKLocalXPCConnectionFactory : NSObject <EKXPCConnectionFactory> {
    id<CADTCCPermissionChecker> _tccPermissionChecker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
