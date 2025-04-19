@class FSMutableFileDataBuffer;

@interface FSDirectoryEntryPacker : NSObject {
    void *_lastEntry;
}

@property (readonly) long long bytesPacked;
@property (readonly) BOOL withAttributes;
@property (readonly) BOOL outOfSpace;
@property long long bytesPacked;
@property (retain) FSMutableFileDataBuffer *buffer;
@property BOOL outOfSpace;
@property BOOL withAttributes;

- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 withAttributes:(BOOL)a1;
- (BOOL)packEntryWithName:(id)a0 itemType:(long long)a1 itemID:(unsigned long long)a2 nextCookie:(unsigned long long)a3 attributes:(id)a4;
- (void)setLastEntryAsEOF;

@end
