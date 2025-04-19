@class NSString, ABCNMutableInMemoryState;

@interface ABCNInMemorySaveTransaction : NSObject <ABCNDataMapperSaveTransaction> {
    ABCNMutableInMemoryState *_mutableState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addContacts:(id)a0 withSaveResponse:(id)a1;
- (void)addGroups:(id)a0 withSaveResponse:(id)a1;
- (void)clearMeCardIdentifierWithSaveResponse:(id)a0;
- (BOOL)commitChangesWithSaveResponse:(id)a0 error:(id *)a1;
- (void)deleteContacts:(id)a0 withSaveResponse:(id)a1;
- (void)deleteGroups:(id)a0 withSaveResponse:(id)a1;
- (id)initWithMutableState:(id)a0;
- (void)setMeCardIdentifier:(id)a0 withSaveResponse:(id)a1;
- (void)updateContacts:(id)a0 withSaveResponse:(id)a1;
- (void)updateGroups:(id)a0 withSaveResponse:(id)a1;

@end
