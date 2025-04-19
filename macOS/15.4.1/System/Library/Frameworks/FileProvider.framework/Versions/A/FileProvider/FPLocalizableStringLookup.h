@class NSString, NSBundle, NSArray;

@interface FPLocalizableStringLookup : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) id cfBundle;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSArray *tableNames;

- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0;

@end
