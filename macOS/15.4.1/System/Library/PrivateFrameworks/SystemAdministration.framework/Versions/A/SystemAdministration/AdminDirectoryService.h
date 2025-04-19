@class NSString;

@interface AdminDirectoryService : NSObject {
    unsigned int mDirReference;
    NSString *mNameOfDefaultLocalNode;
    NSString *mNameOfSearchNode;
}

+ (unsigned int)sharedSession;
+ (unsigned int)dirReferenceForServiceAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;
+ (id)directoryServiceAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;
+ (id)sharedDirectoryService;

- (void)dealloc;
- (void)finalize;
- (void)close;
- (void)open;
- (unsigned int)session;
- (BOOL)isOpen;
- (id)initWithDirectoryServiceAtAddress:(id)a0 name:(id)a1 password:(id)a2 port:(long long)a3;
- (id)nameOfDefaultLocalNode;
- (id)nameOfNodeWithName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 patternMatch:(int)a1;
- (id)nameOfSearchNode;
- (id)namesOfNodeWithName:(struct { unsigned int x0; unsigned int x1; char x2[1]; } *)a0 patternMatch:(int)a1;

@end
