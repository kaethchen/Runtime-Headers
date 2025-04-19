@class NSURL, NSMutableArray, NSFileHandle;

@interface ABVCardSingleFileSerializer : ABVCardFileSerializer {
    NSMutableArray *_names;
    BOOL _usePeopleNamesAsName;
    NSFileHandle *_cardHandle;
}

@property (copy) NSURL *cardURL;

+ (id)serializerWithBasePath:(id)a0 names:(id)a1;

- (void)dealloc;
- (id)initWithBasePath:(id)a0;
- (id)makeProgress;
- (void)overrideNames:(id)a0;
- (void)serializePeople:(id)a0;
- (void)serializePersonWithName:(id)a0 vCardData:(id)a1;

@end
