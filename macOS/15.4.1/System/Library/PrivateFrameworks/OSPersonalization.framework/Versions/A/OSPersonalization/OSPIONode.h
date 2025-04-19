@class NSString;

@interface OSPIONode : NSObject

@property (retain) NSString *nodePath;
@property unsigned int entry;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (unsigned char)byteForKey:(id)a0;
- (unsigned int)unsignedIntForKey:(id)a0;
- (unsigned long long)unsignedLongLongForKey:(id)a0;
- (id)initWithNodePath:(id)a0;

@end
