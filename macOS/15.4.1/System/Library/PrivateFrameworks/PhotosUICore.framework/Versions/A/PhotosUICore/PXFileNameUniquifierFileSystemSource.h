@class NSString, NSFileManager;

@interface PXFileNameUniquifierFileSystemSource : NSObject <PXFileNameUniquifierExistingFileSource>

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
