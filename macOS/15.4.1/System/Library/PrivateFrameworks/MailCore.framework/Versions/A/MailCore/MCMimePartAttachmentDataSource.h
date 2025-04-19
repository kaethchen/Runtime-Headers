@class NSString, MCMimePart;

@interface MCMimePartAttachmentDataSource : NSObject <MCAttachmentDataSource>

@property (readonly, nonatomic) MCMimePart *mimePart;
@property (readonly, nonatomic) unsigned long long approximateSize;
@property (readonly, nonatomic) BOOL dataIsLocallyAvailable;
@property (readonly, nonatomic) BOOL canResultsBeCached;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)approximateSizeForAccessLevel:(long long)a0;
- (void)dataForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (void)fileWrapperForAccessLevel:(long long)a0 completionBlock:(id /* block */)a1;
- (id)initWithMimePart:(id)a0;

@end
