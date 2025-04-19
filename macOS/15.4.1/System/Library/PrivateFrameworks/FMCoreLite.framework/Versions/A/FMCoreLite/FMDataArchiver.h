@class NSURL, NSData;

@interface FMDataArchiver : NSObject

@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSData *unitTestData;
@property (nonatomic) long long dataProtectionClass;
@property (nonatomic) BOOL backedUp;
@property (nonatomic) BOOL createDirectories;

+ (id)defaultClasses;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id)saveDictionary:(id)a0;
- (id)readDictionaryAndClasses:(id)a0 error:(id *)a1;
- (void)injectUnitTestData:(id)a0;
- (id)readArrayAndClasses:(id)a0 error:(id *)a1;
- (id)readDataOfClasses:(id)a0 error:(id *)a1;
- (id)saveArray:(id)a0;
- (BOOL)saveArray:(id)a0 error:(id *)a1;
- (BOOL)saveDictionary:(id)a0 error:(id *)a1;
- (id)saveObject:(id)a0;
- (id)underlyingDataWithError:(id *)a0;

@end
