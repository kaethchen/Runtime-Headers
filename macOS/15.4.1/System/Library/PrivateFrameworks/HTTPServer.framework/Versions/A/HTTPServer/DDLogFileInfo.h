@class NSString, NSDictionary, NSDate;

@interface DDLogFileInfo : NSObject {
    NSString *fileName;
    NSDictionary *fileAttributes;
    NSDate *creationDate;
    NSDate *modificationDate;
    unsigned long long fileSize;
}

@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSDictionary *fileAttributes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) double age;
@property (nonatomic) BOOL isArchived;

+ (id)logFileWithPath:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)fileAttributes;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)modificationDate;
- (id)creationDate;
- (double)age;
- (BOOL)isArchived;
- (id)initWithFilePath:(id)a0;
- (void)addExtendedAttributeWithName:(id)a0;
- (BOOL)hasExtendedAttributeWithName:(id)a0;
- (void)removeExtendedAttributeWithName:(id)a0;
- (void)renameFile:(id)a0;
- (long long)reverseCompareByCreationDate:(id)a0;
- (long long)reverseCompareByModificationDate:(id)a0;
- (void)setIsArchived:(BOOL)a0;

@end
