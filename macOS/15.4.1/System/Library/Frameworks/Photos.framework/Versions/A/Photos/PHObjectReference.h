@class NSString, NSArray, NSURL;

@interface PHObjectReference : NSObject <NSItemProviderWriting, NSItemProviderReading>

@property (class, readonly, nonatomic) NSString *representedType;
@property (class, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly, copy) NSArray *readableTypeIdentifiersForItemProvider;

@property (readonly, copy, nonatomic) NSURL *libraryURL;
@property (readonly, copy, nonatomic) NSString *representedType;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)filteredObjectReferences:(id)a0 inPhotoLibrary:(id)a1;
+ (id)referenceForObject:(id)a0;

- (void).cxx_destruct;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)dictionaryForReferenceType:(id)a0;
- (id)initWithDictionary:(id)a0 referenceType:(id)a1;
- (id)initWithLocalIdentifier:(id)a0 libraryURL:(id)a1;

@end
