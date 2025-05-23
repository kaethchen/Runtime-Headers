@class NSURL, NSDictionary;

@interface CKAtomBatchWriterOptions : NSObject

@property (nonatomic) unsigned char formatVersion;
@property (nonatomic) BOOL fileBacked;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSDictionary *underlyingWriterOptionsByClass;

- (id)init;
- (void).cxx_destruct;

@end
