@class NSIndexSet;
@protocol PXUIImageProvider;

@interface PXSidebarImageRequestDetails : NSObject

@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic) long long sidebarRequestID;
@property (copy, nonatomic) NSIndexSet *mediaRequestIDs;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithMediaProvider:(id)a0 mediaRequestIDs:(id)a1;

@end
