@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *prop;
@property (retain, nonatomic) NSString *match;
@property (retain, nonatomic) NSString *matchTypeAttribute;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)initWithSearchPropertyNameSpace:(id)a0 andName:(id)a1;

@end
