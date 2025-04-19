@class NSString;

@interface MFRemoteURLAttachmentDataSource : MCRemoteURLAttachmentDataSource <MCRemoteAttachmentDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_persistDownloadedFileWrapper:(id)a0 originalContentsURL:(id)a1;
- (void)fetchAttachmentForAccessLevel:(long long)a0 mimePartNumber:(id)a1 withCompletionBlock:(id /* block */)a2;

@end
