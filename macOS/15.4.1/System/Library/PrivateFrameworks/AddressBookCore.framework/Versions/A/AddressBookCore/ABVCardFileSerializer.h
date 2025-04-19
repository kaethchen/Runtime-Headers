@class NSString, NSArray, NSMutableArray;

@interface ABVCardFileSerializer : NSObject {
    NSMutableArray *_filenames;
}

@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) NSArray *filenames;

+ (id)filenameForPeople:(id)a0;
+ (id)filenamesForPeople:(id)a0;
+ (id)serializerWithBasePath:(id)a0;
+ (id)serializerWithBasePath:(id)a0 names:(id)a1;
+ (id)serializerWithBasePath:(id)a0 singleCard:(BOOL)a1;
+ (id)serializerWithBasePath:(id)a0 singleCard:(BOOL)a1 names:(id)a2;

- (void)dealloc;
- (void)addFilename:(id)a0;
- (id)initWithBasePath:(id)a0;
- (id)makeProgress;
- (void)serializePeople:(id)a0;
- (void)serializePerson:(id)a0;
- (void)serializePersonWithName:(id)a0 vCardData:(id)a1;
- (void)writeVCardData:(id)a0 toPath:(id)a1;

@end
