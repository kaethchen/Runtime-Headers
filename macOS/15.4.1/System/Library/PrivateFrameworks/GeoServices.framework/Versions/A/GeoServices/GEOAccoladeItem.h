@class NSString, NSMapTable, GEOPDAccoladeValue;

@interface GEOAccoladeItem : NSObject {
    GEOPDAccoladeValue *_accoladeValue;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) unsigned int iconId;
@property (readonly, nonatomic) NSString *accoladeText;
@property (readonly, nonatomic) BOOL shouldDisplayAccoladeText;

+ (id)accoladeItemsFromPDAccoladeItems:(id)a0 attributionMap:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAccoladeValue:(id)a0 attributionMap:(id)a1;

@end
