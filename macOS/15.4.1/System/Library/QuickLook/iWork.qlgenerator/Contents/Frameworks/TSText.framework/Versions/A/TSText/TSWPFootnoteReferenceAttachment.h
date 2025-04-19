@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (copy, nonatomic) NSString *customMarkString;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned int)elementKind;
- (BOOL)isSearchable;
- (id)copyWithContext:(id)a0;
- (id)childEnumerator;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)applyMark;
- (void)checkDebug;
- (unsigned long long)findCharIndex;
- (id)initWithContext:(id)a0 wpStorage:(id)a1;
- (void)setContainedStorageParentInfoToStorage:(id)a0;
- (void)setParentStorage:(id)a0;
- (BOOL)shouldArchiveStringEquivalent;
- (id)stringEquivalent;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned long long)findCharIndexWithHintIndex:(unsigned long long *)a0;
- (id)objectsForStyleMigrating;
- (BOOL)supportsUUID;

@end
