@class NSURL;

@interface ICNFMCLargeAttachmentFileWrapper : NSFileWrapper

@property (retain, nonatomic) NSURL *fileToCopy;
@property (nonatomic) unsigned long long approximateSize;

+ (id)ic_fileWrapperWithDictionaryRepresentation:(id)a0;
+ (id)fileWrapperWithURL:(id)a0 andContentID:(id)a1;
+ (id)localAttachmentFilesDirectory;

- (void).cxx_destruct;
- (id)symbolicLinkDestinationURL;
- (id)ic_archivedDataWithPartNumber:(id)a0;
- (BOOL)isALargeAttachment;

@end
