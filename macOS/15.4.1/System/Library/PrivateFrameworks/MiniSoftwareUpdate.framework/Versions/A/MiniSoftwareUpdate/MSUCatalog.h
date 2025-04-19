@class NSArray, NSString, NSURL, NSDate;

@interface MSUCatalog : NSObject <NSURLSessionDelegate>

@property (retain) NSURL *URL;
@property unsigned long long options;
@property (retain) NSDate *loadDate;
@property long long version;
@property (retain) NSArray *products;
@property (readonly, copy) NSString *testMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_validateDictionary:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)_parseFromDictionary:(id)a0 error:(id *)a1;
- (id)_synthesizedCatalogDictionaryFromLocalDirectoryURL:(id)a0 options:(unsigned long long)a1;
- (id)initWithLocalProductsDirectoryURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithXMLData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
