@class NSMutableData;

@interface AppleDoubleParser : NSObject

@property int fileDescriptor;
@property (retain) NSMutableData *rawHeader;
@property unsigned long long fileSize;
@property unsigned long long headerSize;
@property BOOL emptyFinderInfo;
@property BOOL readOnly;
@property BOOL isAllocateXattr;
@property struct apple_double_header { unsigned int x0; unsigned int x1; unsigned int x2[4]; unsigned short x3; struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } x4[2]; unsigned char x5[32]; unsigned char x6[2]; } *fileHeader;
@property struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } *finderinfo;
@property struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } *rsrcfork;
@property struct attr_header { struct apple_double_header { unsigned int x0; unsigned int x1; unsigned int x2[4]; unsigned short x3; struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } x4[2]; unsigned char x5[32]; unsigned char x6[2]; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[3]; unsigned short x7; unsigned short x8; } *attrHeader;
@property struct attr_entry { unsigned int x0; unsigned int x1; unsigned short x2; unsigned char x3; unsigned char x4[1]; } *firstAttrEntry;

- (void).cxx_destruct;
- (BOOL)updateFileSize:(id *)a0;
- (BOOL)parseFinderInfoAndResourceFork:(id *)a0;
- (void)swapAttrHeader:(struct attr_header { struct apple_double_header { unsigned int x0; unsigned int x1; unsigned int x2[4]; unsigned short x3; struct apple_double_entry { unsigned int x0; unsigned int x1; unsigned int x2; } x4[2]; unsigned char x5[32]; unsigned char x6[2]; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[3]; unsigned short x7; unsigned short x8; } *)a0;
- (void)allocateXattrNamed:(id)a0 sized:(unsigned long long)a1 how:(unsigned int)a2 reply:(id /* block */)a3;
- (BOOL)createAttrHeaderIfNeeded:(id *)a0;
- (BOOL)fillEmptyAppleDoubleFile:(id *)a0;
- (void)initEmptyResourceFork:(struct rsrcfork_header { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4[112]; unsigned char x5[128]; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned char x12; unsigned char x13; unsigned short x14; unsigned short x15; unsigned short x16; } *)a0;
- (id)initWithFileDescriptor:(int)a0 fileSize:(long long)a1 isAllocateXattr:(BOOL)a2;
- (id)initWithFileDescriptor:(int)a0 isAllocateXattr:(BOOL)a1;
- (BOOL)isXattrNameValid:(struct attr_entry { unsigned int x0; unsigned int x1; unsigned short x2; unsigned char x3; unsigned char x4[1]; } *)a0;
- (BOOL)isXattrProtected:(const char *)a0;
- (void)listXattrs:(struct list_xattrs_result { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned char x7[34860]; } *)a0;
- (void)lookupXattrNamed:(id)a0 reply:(id /* block */)a1;
- (BOOL)parseAttrHeader:(id *)a0;
- (BOOL)parseFileHeader:(id *)a0;
- (BOOL)readRawHeader:(id *)a0;
- (void)removeXattrNamed:(id)a0 reply:(id /* block */)a1;
- (BOOL)shiftDataDownAtOffset:(unsigned int)a0 length:(unsigned int)a1 delta:(unsigned long long)a2 error:(id *)a3;
- (BOOL)shiftDataUpAtOffset:(unsigned int)a0 length:(unsigned int)a1 delta:(unsigned long long)a2 error:(id *)a3;
- (void)swapFileHeader;
- (void)updateFileSizeExplicit:(long long)a0;
- (BOOL)writeHeaderToDiskUpToLength:(unsigned int)a0 error:(id *)a1;

@end
