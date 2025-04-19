@class NSString;

@interface SecureMemoryIndex : NSObject {
    void /* unknown type, empty encoding */ indexData;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)indexCount;
- (id)memoryIndexes;
- (void)insertWithLabel:(id)a0 resource:(id)a1;

@end
