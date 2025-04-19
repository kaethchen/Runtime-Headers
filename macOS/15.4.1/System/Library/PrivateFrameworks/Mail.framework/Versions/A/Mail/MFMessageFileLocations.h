@class NSURL, NSDictionary;

@interface MFMessageFileLocations : NSObject

@property (readonly, nonatomic) NSURL *primaryEmlxURL;
@property (retain, nonatomic) NSURL *attachmentDirectory;
@property (readonly, copy, nonatomic) NSDictionary *emlxPartURLsByPartNumber;
@property (readonly, copy, nonatomic) NSDictionary *attachmentURLsByPartNumber;
@property (readonly, nonatomic) BOOL isPartial;
@property (readonly, nonatomic) long long libraryID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_transferToNewFileLocation:(id)a0 renameOrCopyBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)copyToNewFileLocation:(id)a0 replaceIfExists:(BOOL)a1 error:(id *)a2;
- (id)initWithPrimaryEmlxURL:(id)a0;
- (BOOL)moveToNewFileLocation:(id)a0 error:(id *)a1;

@end
