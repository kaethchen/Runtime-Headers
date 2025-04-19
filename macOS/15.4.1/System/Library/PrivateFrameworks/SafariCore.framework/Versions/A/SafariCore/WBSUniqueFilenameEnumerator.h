@class NSString;

@interface WBSUniqueFilenameEnumerator : NSEnumerator {
    NSString *_filenameWithoutExtension;
    NSString *_pathExtension;
    unsigned long long _iteration;
}

@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned long long fileNumber;

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithFilename:(id)a0;

@end
