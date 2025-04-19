@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (void)dealloc;
- (id)description;
- (unsigned char)sqlType;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initForReadOnlyFetching;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (unsigned int)slot;

@end
