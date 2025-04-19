@class OSASuiteDefinition, NSMutableDictionary, OSADictionary;

@interface OSADefinition : NSObject {
    NSMutableDictionary *_attributes;
    OSADictionary *_dictionary;
    OSASuiteDefinition *_suiteDefinition;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (id)code;
- (id)dictionary;
- (void)setDictionary:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)setName:(id)a0;
- (void)setType:(id)a0;
- (id)type;
- (void)setAttributes:(id)a0;
- (id)uniqueIdentifier;
- (void)setCode:(id)a0;
- (id)attributes;
- (void)setUniqueIdentifier:(id)a0;
- (id)anchor;
- (void)setAnchor:(id)a0;
- (BOOL)hidden;
- (id)itemDescription;
- (id)itemKind;
- (void)setItemDescription:(id)a0;
- (BOOL)isExpandable;
- (id)itemIcon;
- (id)suiteDefinition;
- (BOOL)containsSearchValue:(id)a0;
- (id)initWithDictionary:(id)a0 suiteDefinition:(id)a1;
- (BOOL)isOutlinable;
- (id)itemSuite;
- (void)setSuiteDefinition:(id)a0;
- (void)setViewAnchor:(id)a0;
- (id)viewAnchor;

@end
