@class NSString;

@interface NSSQLPrimaryKey : NSSQLColumn {
    NSString *_name;
}

- (void)dealloc;
- (id)name;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;

@end
