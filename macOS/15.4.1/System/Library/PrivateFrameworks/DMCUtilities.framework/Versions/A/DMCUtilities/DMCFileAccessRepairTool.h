@class NSFileManager;

@interface DMCFileAccessRepairTool : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

- (void).cxx_destruct;
- (id)createFileManager;
- (BOOL)changePermissions:(unsigned short)a0 ofFileAtPath:(id)a1;
- (int)accessAtPath:(const char *)a0 mode:(int)a1 error:(int *)a2;
- (id)contentsOfFileAtPath:(id)a0;
- (id)createRepairToolErrorWithCode:(long long)a0;
- (BOOL)fileManagerThinksFileNeedsRepairAtPath:(id)a0;
- (BOOL)fileNeedsRepairAtPath:(id)a0;
- (BOOL)posixThinksFileNeedsRepairAtPath:(id)a0;
- (BOOL)repairFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)writeData:(id)a0 toFileAtPath:(id)a1;

@end
