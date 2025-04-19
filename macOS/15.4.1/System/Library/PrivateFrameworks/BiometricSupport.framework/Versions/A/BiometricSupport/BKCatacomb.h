@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)content;
- (int)deleteAll;
- (int)deleteFile:(id)a0;
- (int)writeData:(id)a0 toFile:(id)a1;
- (int)recover;
- (id)catacombCommitDir;
- (id)catacombPrepareDir;
- (int)commitWrite;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (int)readData:(id *)a0 fromFile:(id)a1 logString:(id *)a2;
- (int)syncDir:(id)a0;

@end
