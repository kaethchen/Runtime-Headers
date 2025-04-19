@class NSString, PLPhotoLibraryPathManagerIdentifier;

@interface PHAssetID : NSObject <PHRecyclableObject, PLAssetID, NSCopying>

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (nonatomic) unsigned short bundleScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
