@class NSProgress, NSString;

@interface MFLibraryProgressUpdater : NSObject <MFAddProgressMonitor>

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
