@class NSArray;

@interface ML3ContainerTable : ML3DatabaseTable {
    NSArray *_columns;
}

- (id)name;
- (void).cxx_destruct;
- (id)columns;

@end
