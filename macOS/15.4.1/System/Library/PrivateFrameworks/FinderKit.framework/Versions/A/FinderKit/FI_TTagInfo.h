@class NSString;

@interface FI_TTagInfo : NSObject {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _tagNode;
}

@property (class, nonatomic) short labelColorForNewTag;

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL visibleInSidebar;
@property (readonly, nonatomic) BOOL pinnedInSidebar;
@property (readonly, nonatomic) long long sidebarIndex;
@property (nonatomic) long long labelColor;
@property (readonly, nonatomic) BOOL isDiscovered;
@property (readonly, nonatomic) BOOL isAddTagPlaceholder;
@property (nonatomic) unsigned long long numberOfItemsLackingThisTag;

+ (id)attrsFromTags:(id)a0;
+ (long long)labelForTag:(id)a0;
+ (long long)labelForTags:(id)a0;
+ (long long)labelFromTagData:(id)a0;
+ (id)tagAttributes:(id)a0 withLabel:(long long)a1;
+ (id)tagAttributes:(id)a0 withLabel:(long long)a1 visible:(BOOL)a2;
+ (id)tagAttributes:(id)a0 withLabel:(long long)a1 visible:(BOOL)a2 numItemsLackingTag:(unsigned long long)a3;
+ (id)tagAttributes:(id)a0 withLabel:(long long)a1 visible:(BOOL)a2 pinned:(BOOL)a3;
+ (id)tagAttributesForNodes:(const void *)a0;
+ (id)tagFromTagAttributes:(id)a0;
+ (id)tagInfoPlaceholderWithName:(id)a0;
+ (id)tagInfoWithDiscoveredName:(id)a0;
+ (id)tagInfoWithName:(id)a0;
+ (id)tagInfoWithName:(id)a0 tagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
+ (id)tagInfoWithName:(id)a0 tagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 labelIndex:(short)a2;
+ (id)tagsForTagsAndLabelIndex:(id)a0 labelIndex:(short)a1;
+ (id)tagsFromNames:(id)a0;
+ (id)tagsFromTagAttr:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id).cxx_construct;
- (id)info;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)tagNode;
- (id)initWithName:(id)a0 tagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 label:(short)a2 isVisible:(const struct TriStateBool { unsigned char x0; } *)a3;
- (id)initWithName:(id)a0 tagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 label:(short)a2 isVisible:(const struct TriStateBool { unsigned char x0; } *)a3 isAddTagPlaceholder:(BOOL)a4;
- (void)syncFromTag:(id)a0;
- (id)tagAttributes;

@end
