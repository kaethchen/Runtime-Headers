@class NSMutableData;

@interface FSExtentPacker : NSObject

@property unsigned int bytesPacked;
@property (retain) NSMutableData *buffer;
@property long long extentsPacked;
@property BOOL outOfSpace;

- (void).cxx_destruct;
- (id)initWithLength:(unsigned long long)a0;
- (id)extentData;
- (id)extentDataByExtentsPacked;
- (id)initWithBlockmapFlags:(unsigned long long)a0;
- (id)initWithExtentCount:(unsigned long long)a0;
- (BOOL)packExtentWithResource:(id)a0 type:(long long)a1 logicalOffset:(long long)a2 physicalOffset:(long long)a3 length:(unsigned long long)a4;

@end
