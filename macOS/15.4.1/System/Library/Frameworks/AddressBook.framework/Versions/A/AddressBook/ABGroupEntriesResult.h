@class NSArray, ABGroupEntry;

@interface ABGroupEntriesResult : NSObject

@property (retain) ABGroupEntry *allDirectoriesGroupEntry;
@property (retain) ABGroupEntry *defaultDirectoryGroupEntry;
@property (retain) NSArray *groupEntries;

- (void).cxx_destruct;

@end
