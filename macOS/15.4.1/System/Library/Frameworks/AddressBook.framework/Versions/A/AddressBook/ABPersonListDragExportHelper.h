@class NSURL, NSArray;

@interface ABPersonListDragExportHelper : NSObject {
    NSArray *_personIdentifiers;
    NSArray *_names;
    int _options;
    NSArray *_people;
}

@property (copy) NSURL *destinationFolder;

- (void).cxx_destruct;
- (id)people;
- (id)fetchContacts;
- (void)serializePeople;
- (id)filenameFromNames:(id)a0;
- (id)initWithPersonIdentifiers:(id)a0 names:(id)a1 options:(int)a2;
- (id)nameOfSingleFile;
- (id)namesOfIndividualFiles;
- (id)namesOfPendingFiles;
- (BOOL)shouldUnify;
- (BOOL)singleCard;

@end
