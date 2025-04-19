@class SHKSharingService;
@protocol NSSharingServiceDelegate;

@interface NSSharingServiceReserved : NSObject {
    id<NSSharingServiceDelegate> delegate;
    SHKSharingService *service;
}

- (void).cxx_destruct;

@end
