@interface TRIFileBackedMutableStringArray : NSObject {
    int _fd;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayFromDirectory:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)addString:(id)a0;
- (BOOL)enumerateStringsWithBlock:(id /* block */)a0;

@end
