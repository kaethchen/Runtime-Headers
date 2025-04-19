@class NSString, EFPathComponent, ECAngleBracketIDHash;
@protocol MCRemoteAttachmentDataSource;

@interface MFLibraryAttachmentDataSource : NSObject <MCAttachmentDataSource>

@property (readonly, nonatomic) long long messageID;
@property (readonly, copy, nonatomic) NSString *mimePartNumber;
@property (readonly, copy, nonatomic) ECAngleBracketIDHash *contentIDHash;
@property (readonly, copy, nonatomic) EFPathComponent *attachmentFilename;
@property (readonly, nonatomic) BOOL isMailDropImageArchive;
@property (readonly, nonatomic) BOOL isMailDropImageThumbnail;
@property (readonly, nonatomic) BOOL isAutoArchiveAttachment;
@property (readonly, nonatomic) id<MCRemoteAttachmentDataSource> remoteDataSource;
@property (readonly, nonatomic) BOOL dataIsLocallyAvailable;
@property (readonly, nonatomic) BOOL canResultsBeCached;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_asyncOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (id)_dataFromStore:(id *)a0;
- (id)_dataFromBinaryAttachmentFile:(id *)a0;
- (void)_dataFromRemoteDataSourceWithAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (unsigned long long)approximateSizeForAccessLevel:(long long)a0;
- (void)dataForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (void)fileWrapperForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (id)initWithMessage:(id)a0 mimePartNumber:(id)a1 attachment:(id)a2 remoteDataSource:(id)a3;

@end
