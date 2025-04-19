@class NSArray, NSMutableArray;

@interface ACSHToolbarOrdering : ACSHPlistObject

@property (retain, nonatomic) NSMutableArray *_toolbarIdentifiersPriorToBasePanel;
@property (retain, nonatomic) NSMutableArray *_toolbarIdentifiersAfterBasePanel;
@property (readonly, copy, nonatomic) NSArray *_allToolbarIdentifiers;
@property (readonly, copy, nonatomic) NSArray *toolbarIdentifiersPriorToBasePanel;
@property (readonly, copy, nonatomic) NSArray *toolbarIdentifiersAfterBasePanel;

- (void).cxx_destruct;
- (id)initWithUndoManager:(id)a0;
- (id)_allToolbarIdentifiersWithBasePanelIdentifier:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)allToolbarIdentifiersWithBasePanelIdentifier:(id)a0;
- (id)descriptionForDepth:(unsigned long long)a0;
- (id)dictionaryForSaving;
- (void)mergeInToolbarOrdering:(id)a0;
- (void)reorderToolbarIdentifiersPrior:(id)a0 after:(id)a1;
- (void)updateWithPanelCollection:(id)a0;

@end
