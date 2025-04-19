@class NSDictionary, NSMutableDictionary;

@interface FI_TTableViewItem : NSObject <NSCopying> {
    NSMutableDictionary *_data;
}

@property (readonly, retain, nonatomic) NSDictionary *data;

+ (id)keyPathForKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
