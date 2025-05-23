@class NSString, NSFileManager;

@interface CNFileManager : NSObject <CNFileManager>

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dataWithContentsOfURL:(id)a0;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)a0;
- (id)initWithFileManager:(id)a0;
- (id)asyncDataWithContentsOfURL:(id)a0;
- (id)asyncWriteData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2;
- (id)contentsOfDirectoryAtURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2;
- (id)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2;
- (BOOL)fileExistsAtURL:(id)a0;
- (BOOL)fileExistsAtURL:(id)a0 isDirectory:(BOOL *)a1;
- (BOOL)getValue:(id *)a0 forExtendendAttribute:(id)a1 url:(id)a2 error:(id *)a3;
- (id)observableWithContentsOfURL:(id)a0;
- (id)removeExtendedAttribute:(id)a0 atURL:(id)a1;
- (id)removeItemAtURL:(id)a0;
- (id)setValue:(id)a0 forExtendedAttribute:(id)a1 atURL:(id)a2;
- (id)valueForExtendedAttribute:(id)a0 atURL:(id)a1;
- (id)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2;

@end
