@class NSString;
@protocol VGOEMApplicationFinderUpdates;

@interface VGOEMApplicationFinder : NSObject <VGOEMApplicationFinding>

@property (weak, nonatomic) id<VGOEMApplicationFinderUpdates> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)findOEMApplications;

@end
