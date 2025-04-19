@class NSString, NSSet, NSImage, NSMutableArray;

@interface IdentityDataSource : NSObject <NSTableViewDataSource, NSTableViewDelegate> {
    NSMutableArray *_identities;
    NSSet *_disabledIdentities;
    NSImage *_userImage;
    NSImage *_groupImage;
    NSImage *_vCardImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (void)setIdentities:(id)a0;
- (BOOL)isIdentityDisabled:(id)a0;
- (id)listObjects;
- (void)setABPeople:(id)a0;
- (void)setDisabledIdentities:(id)a0;

@end
